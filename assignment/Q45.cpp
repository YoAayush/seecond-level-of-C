#include<iostream>
using namespace std;
class publication{
    protected:
    string title;
    float price;

    public:
    void getdata(){
        cout<<"enter title: ";
        cin>>title;
        cout<<"enter price: ";
        cin>>price;
    }

    void display(){
        cout<<"Title: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

class sales{
    protected:
    float arr_sales[3];

    public:
    void getdata(){
        for(int i=0; i<3; i++){
            cin>>arr_sales[i];
        }
    }

    void display(){
        cout<<"sales of a publication for the last three months";
        for(int j=0; j<3; j++){
            cout<<arr_sales[j]<<endl;
        }
    }
};

class book:public publication , public sales{
    protected:
    long int pages;

    public:
    void getdata(){
        cout<<"Enter number of pages: ";
        cin>>pages;
    }

    void display(){
        cout<<"Number of Pages: "<<pages<<endl;
    }
};

int main(){
    book obj;
    obj.getdata();
    obj.display();

return 0;
}