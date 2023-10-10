#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"enter the number: ";
	cin>>x;
	if(x%2 == 0){
		cout<<x;
		cout<<"is even";
	} else{
		cout<<x;
		cout<<"is odd";
	}
}
