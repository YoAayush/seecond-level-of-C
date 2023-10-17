#include<iostream>
using namespace std;
class base_class{
	public:
		void display(){
			cout<<"base class"<<endl;
		}
};

class derived_class:public base_class{
	public:
		void display(){
			cout<<"derived class"<<endl;
		}
};

int main(){
	derived_class obj;
	obj.display();
	
	obj.base_class::display();
return 0;
}