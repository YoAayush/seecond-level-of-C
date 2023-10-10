#include<iostream>
using namespace std;
class person{
    protected:
    char name[100];
    int age;

    public:
    void person_detail(){
        cout<<"Name: ";
        gets(name);
        cout<<"Age: ";
        cin>>age;
    }
};

class student:public person{
    protected:
    int stu_id;

    public:
    void get_id(){
        cout<<"enter student id: ";
        cin>>stu_id;
    }
    void show_data(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Age: "<<age<<endl;
        cout<<"Student ID: "<<stu_id<<endl;
    }
};

class exam:public student{
    
};