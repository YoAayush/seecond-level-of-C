#include<iostream>
using namespace std;
int main(){
    int num,i,sum,a=0,b=1;
    cout<<"enter the number: ";
    cin>>num;
    cout<<"fibonaci series:"<<" ";
    cout<<a<<" "<<b<<" ";
    for(i=0;i<num;i=i+1){
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
    return 0;
}
