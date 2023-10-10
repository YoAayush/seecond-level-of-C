#include<iostream>
using namespace std;
class jkl;
class abc{
    private :
        int length;
    public :
        abc(){
            length=9;
        }
        friend int area_of_rectangle(abc t,jkl p);
};

class jkl{
    private :
        int breadth;
    public :
        jkl(){
           breadth=8;
        }
        friend int area_of_rectangle(abc t,jkl p);
};

int area_of_rectangle(abc t, jkl p){
    return t.length*p.breadth;
}

int main(){
    abc obj1;
    jkl obj2;
    int area = area_of_rectangle(obj1,obj2);
    cout<<"area of rectangle: "<<area;
}
