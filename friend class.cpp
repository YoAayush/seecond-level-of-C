#include<iostream>
using namespace std;
class abc{
    private :
        int prv_var;
    protected :
        int prot_var;
    public :
        // abc(){
        //     prv_var=12;
        //     prot_var=14;
        // }
       abc(){
            cout<<"private member: ";
            cin>>prv_var;
            cout<<"protected member: ";
            cin>>prot_var;
        }
        friend class F;
};

class F{
    public :
        void display(abc t){
            cout<<"value of private member is: "<<t.prv_var<<endl;
            cout<<"value of protected member is: "<<t.prot_var<<endl;
        }
};

int main(){
    abc obj1;
    F obj2;
    obj2.display(obj1);
}
