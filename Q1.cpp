#include<iostream>
using namespace std;
class rectangle{
    private:
        int length;
        int breadth;

    public:
        void setdata(int len, int bd){
            length = len;
            breadth = bd;
        }
        int parameter(){
            int param = (2*(length+breadth));
            cout<<"value of parameter : "<<param;
            return param;
        }
        int area(){
            int area = (length*breadth);
            cout<<"\n"<<"value of area : "<<area;  
            return area;
        }
};

int main(){
    int len,breadth;
    cout<<"enter the value of length of rectangle: ";
    cin>>len;
    cout<<"enter the value of breadth of rectangle: ";
    cin>>breadth;

    rectangle obj;
    obj.setdata(len,breadth);
    obj.parameter();
    obj.area();
}
