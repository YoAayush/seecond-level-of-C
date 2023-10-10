#include<iostream>
using namespace std;
int factorial(int n){
	if((n==0) || (n==1)){
		return 1;
	} else{
		return n*factorial(n-1);
	}
}
int main(){
	int n,res;
	cout<<"enter the value of n to find factorial: ";
	cin>>n;
	res = factorial(n);
	cout<<"the factorial is: ";
	cout<<res;
}
