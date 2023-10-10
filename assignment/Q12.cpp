#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter a number: ";
    cin>>n;
    //checking whether a prime or not.
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }

    if(count==1){
        cout<<"entered number is prime number"<<endl;
    } else{
        cout<<"entered number is not a prime number"<<endl;
    }
return 0;
}
