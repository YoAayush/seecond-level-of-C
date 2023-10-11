#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    int age;

    public:
    void person_data(){
        cout<<"enter student name: ";
        cin>>name;
        cout<<"enter age: ";
        cin>>age;
    }
};

class student:public person{
    protected:
    long int student_id;

    public:
    void get_student_id(){
        cout<<"enter student id: ";
        cin>>student_id;
    }
};

class exam:public student{
    protected:
    string subject;
    float marks;

    public:
    void get_subject_detail(){
        cout<<"enter subject name: ";
        cin>>subject;
        cout<<"enter marks: ";
        cin>>marks;
    }

    void display_all_data(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Student ID: "<<student_id<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<endl;
    }
};

int main(){
    int n;
    cout<<"How many students do you want to create a database for ? ";
    cin>>n;
    exam obj[n];
    for(int i=0; i<n; i++){
        obj[i].person_data();
        obj[i].get_student_id();
        obj[i].get_subject_detail();
    }

    //displaying data.
    for(int j=0; j<n; j++){
        obj[j].display_all_data();
    }

return 0;
}