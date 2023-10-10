#include<iostream>
#include<string>
using namespace std;
class student{
    private:
        int ID;
        string name;
        int marks[5];

    public:
        void getdata(int id, string nm, int marks1[]){
            ID = id;
            name = nm;
            for(int i=0; i<5; i++){
                marks[i] = marks1[i];
            }
        }
        void showresult(){
            cout<<"your entered credentials are:"<<"\n";
            cout<<"ID : "<<ID<<"\n";
            cout<<"Name : "<<name<<"\n";
            cout<<"Marks:"<<"\n";
            for(int i=0; i<5; i++){
                cout<<"marks of subject "<<(i+1)<<" is "<<marks[i]<<endl;
            }
        }
};

int main(){
     int id,marks1[5];
    string name1;
    cout<<"enter the student id: ";
    cin>>id;
    cout<<"enter the student name: ";
    cin>>name1;
    cout<<"Enter 5 subjects mark"<<endl;
    for(int i=0; i<5; i++){
        cin>>marks1[i];
    }

    student obj;
    obj.getdata(id,name1,marks1);
    obj.showresult();
}