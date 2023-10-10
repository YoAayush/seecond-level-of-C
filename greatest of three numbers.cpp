#include<iostream>
using namespace std;
int greatest(int x, int y, int z);
int main(){
	int a,b,c,result;
	cout<<"enter the value of a: ";
	cin>>a;
	cout<<"enter the value of b: ";
	cin>>b;
	cout<<"enter the value of c: ";
	cin>>c;
	result = greatest(a,b,c);
	if(result==1){
		cout<<"x is greatest";
	} else {
		cout<<"x is not greatest";
	}
}
int greatest(int x, int y, int z){
	int result = (x>y && x>z) ? 1 : 0;
	return result;
}

