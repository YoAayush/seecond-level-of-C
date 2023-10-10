#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter variable a: ";
	cin>>a;
	cout<<"enter variable b: ";
	cin>>b;
	cout<<"before swapping :";
	cout<<a;
	cout<<b;
	cout<<"\nafter swapping :";
	a = a+b;
	b = a-b;
	a = a-b;
	cout<<a;
	cout<<b;

return 0;
}
