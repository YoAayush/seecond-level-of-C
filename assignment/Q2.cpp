#include<iostream>
using namespace std;
int main(){
    float num;
    cout<<"enter the floating point number: ";
    cin>>num;
    cout<<"Integer part of the number is: "<<int(num)<<endl;
    cout<<"Floating part of the number is: "<<(num-int(num));

    return 0;
}