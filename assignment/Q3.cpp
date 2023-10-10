#include<iostream>
#include<math.h>
using namespace std;

int displacement(int a,int u, int t){
    return u * t + 0.5 * a * pow(t,2);
}

int main(){
    int a,u,t,value;
    cout<<"Enter the values of a, u and t respectively: ";
    cin>>a>>u>>t;
    value = displacement(a,u,t);
    cout<<"value of displacement = "<<value;

    return 0;
}