//Q45
#include<iostream>
using namespace std;
class publication{
    protected:
        char title[30];
        float price;

    public:
        void getdata(){
            cout<<"\nEnter Title: ";
            fflush(stdin);
            gets(title);
            cout<<"Enter price: ";
            cin>>price;
        }
        void display(){
            cout<<"\nDetails"<<endl;
            cout<<"Title: "<<title<<endl;
            cout<<"Price: "<<price<<endl;
        }
};

class sales{
    protected:
        float sale[3];

    public: 
        void getdata1(){
            cout<<"Enter sales of last 3 months:\n";
            for(int i=0;i<3;i++){
            cin>>sale[i];
            }
        }
        void display1(){
            cout<<"Sales: "<<endl;
            for(int i=0;i<3;i++){
            cout<<sale[i]<<endl;
            }
        }
};

class book:public publication,public sales{
    protected:
        int pages;

    public:
        void getdata2(){
            cout<<"Enter pages: ";
            cin>>pages;
        }
        void display2(){
            cout<<"Pages: "<<pages<<endl;
        }
};

class tape:public publication,public sales{
    protected:
        int rolls;
        char company[30];

    public:
        void getdata3(){
            cout<<"Enter no of rolls: ";
            cin>>rolls;
            cout<<"Enter Company: ";
            fflush(stdin);
            gets(company);
        }
        void display3(){
            cout<<"No of Rolls: "<<rolls<<endl;
            cout<<"Company: "<<company<<endl;
        }
};

class pamphlet:public publication{
    protected:
        int pam_no;

    public: 
        void getdata4(){
            cout<<"Enter pamphlet no: ";
            cin>>pam_no;
        }
        void display4(){
            cout<<"Pamphlet no.: "<<pam_no<<endl;
        }
};

class notice:public pamphlet{
    protected:
        int notice_no;
        
    public:
        void getdata5(){
            cout<<"Enter Notice no: ";
            cin>>notice_no;
        }
        void display5(){
            cout<<"Notice no: "<<notice_no<<endl;
        }
};

int main(){
    book b;
    tape t;
    notice n;
    b.getdata();
    b.getdata1();
    b.getdata2();
    b.display();
    b.display1();
    b.display2();
    t.getdata();
    t.getdata1();
    t.getdata3();
    t.display();
    t.display1();
    t.display3();
    n.getdata();
    n.getdata4();
    n.getdata5();
    n.display();
    n.display4();
    n.display5();
return 0;
}