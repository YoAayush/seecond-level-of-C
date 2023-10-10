#include<iostream>
using namespace std;
float calculation(int P, float R, int T){
	float SI;
	SI=(P*R*T)/100;
	return SI;
}
int main(){
	int P,T;
	float R,result;
	cout<<"enter principle amount: ";
	cin>>P;
	cout<<"enter rate: ";
	cin>>R;
	cout<<"enter time: ";
	cin>>T;
	result = calculation(P,R,T);
	cout<<"the simple interest is: ";
	cout<<result;
}
