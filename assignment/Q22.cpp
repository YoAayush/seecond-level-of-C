#include<iostream>
using namespace std;
class complex{
	int re,im;
	public:
		void getdata(){
			cout<<"enter the real part: ";
			cin>>re;
			cout<<"enter the imaginary part: ";
			cin>>im;
		}
		void display(){
			cout<<re<<" + "<<im<<"i"<<endl;
		}
		void sum(complex,complex);
};
void complex::sum(complex c1, complex c2){
	re = c1.re + c2.re;
	im = c1.im + c2.im;
}
int main(){
	complex c1,c2,c3;
	cout<<"enter the 1st complex:\n";
	c1.getdata();
	cout<<"enter the 2nd complex:\n";
	c2.getdata();
	cout<<"The 1st complex no. is:\n";
	c1.display();
	cout<<"The 2nd complex no. is:\n";
	c2.display();
	
	c3.sum(c1,c2);
	cout<<"sum of complex no.'s is:\n";
	c3.display();
	return 0;
}