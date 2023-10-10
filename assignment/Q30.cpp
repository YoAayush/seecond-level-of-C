#include<iostream>
#include<string.h>
using namespace std;
class student{
    protected:
    char name[100],address[150];
    int marks[5];

    public:
    void student_data(){
        cout<<"enter student name: ";
        gets(name);
        cout<<"enter student address: ";
        gets(address);
        cout<<"enter student marks of 5 subjects:\n";
        for(int i=0; i<5; i++){
            cin>>marks[i];
        }
    }
};

class percentage:public student{
    protected:
    float percentage;
    float total = 0;

    public:
    void cal_per(){
        for(int i=0; i<5; i++){
            total += marks[i];
        }
        percentage=(total/5)*100;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Marks of 5 subjects:"<<endl;
        for(int i=0; i<5; i++){
            cout<<"marks of subject "<<i<<" : "<<marks[i]<<endl;
        }
        cout<<"Total Percentage: "<<percentage<<endl;
    }
};

class staff{
    protected:
    char s_name[30],s_address[100];

    public:
    void get_data(){
        cout<<"Enter Staff Name: ";
        gets(s_name);
        cout<<"enter staff address: ";
        gets(s_address);
    }
};

class staff_sal:public staff{
    protected:
    float salary;

    public:
    void get_sal(){
        cout<<"enter staff salary: ";
        cin>>salary;
    }

    void staff_data(){
        cout<<"Staff name: "<<s_name<<endl;
        cout<<"Staff address: "<<s_address<<endl;
        cout<<"Staff salary: "<<salary;
    }
};

int main(){
    percentage obj;
    staff_sal obj1;
    obj.student_data();
    obj.cal_per();
    obj.display();

    obj1.get_data();
    obj1.get_sal();
    obj1.staff_data();
}