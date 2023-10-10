#include<iostream>
using namespace std;
class person{
    protected:
    string name,address;

    public:
    void accept(string per_name,string per_addr){
        name = per_name;
        address = per_addr;
    }
};

class student:public person{
    protected:
    int roll_no,marks[5];

    public:
    void accepting_data(int rn,int mr[5]){
        roll_no = rn;
        for (int i = 0; i < 5; i++)
        {
            marks[i] = mr[i];
        }
    }

    void display_data(){
        cout<<"Name:- "<<name<<endl;
        cout<<"Address:- "<<address<<endl;
        cout<<"Roll No.:- "<<roll_no<<endl;
        cout<<"Marks of five subjects:-\n";
        for (int i=0; i<5; i++){
            cout<<marks[i]<<endl;
        }
    }
};

int main(){
    student object;
    string nm,add;
    int rn,mrks[5];
    cout<<"enter your name:- ";
    cin>>nm;
    cout<<"enter your address:- ";
    cin>>add;
    cout<<"enter your roll no.:- ";
    cin>>rn;
    cout<<"enter the marks:-\n";
    for (int i=0; i<5; i++){
        cin>>mrks[i];
    }
    object.accept(nm,add);
    object.accepting_data(rn,mrks);
    object.display_data();
}