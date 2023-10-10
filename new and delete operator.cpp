#include<iostream>
using namespace std;
int main(){
    int i,n;
    int *p;
    cout<<"how many numbers you want to type: ";
    cin>>i;
    p = new int[i];
    if(p==NULL){
        cout<<"srry!! memory could not be located.";
    } else{
        for(n=0; n<i; n++){
            cout<<"enter the number: ";
            cin>>p[n];
        }
        cout<<"you have entered: ";
        for(n=0; n<i; n++){
            cout<<p[n]<<",";
        }
    }
    delete[] p;
}