#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of a , b and c : ";
    cin>>a>>b>>c;

    //finding greatest of three numbers.
    if(a>b && a >c){
        cout<<"greatest number is a = "<<a;
    } else if (b > c){
        cout<<"greatest number is b = "<<b;
    } else{
        cout<<"greatest number is c= "<<c;
    }
    return 0;
}