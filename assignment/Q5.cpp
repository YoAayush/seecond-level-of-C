#include<iostream>
using namespace std;

void table(int x){
    cout<<"Table of "<<x<<endl;
    for(int i=1; i<=10; i++){
        cout<<x<<" * "<<i<<" = "<<(x*i)<<endl;
    }
}

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    table(n);
}