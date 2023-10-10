#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int Armstrong(int n){
    int sum=0 , len , original;
    string value = to_string(n);
    len = value.length();
    // cout<<len;
    original = n;
    //calculating sum of digits.
    while(n != 0){
        int digit = n % 10;
        sum += pow(digit,len);
        n /= 10;
    }
    if(sum == original){
        return true;
    } else{
        return false;
    }
}
int main(){
    int num,value;
    cout<<"enter a number: ";
    cin>>num;
    value = Armstrong(num);
    if(value == 1){
        cout<<"Number is an Armstrong number.";
    } else{
        cout<<"Number is not an Armstrong number.";
    }
}