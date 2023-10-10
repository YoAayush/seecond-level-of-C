#include<iostream>
using namespace std;
class students
    {
    private:
        int enrollment_num;
        string name;
    public:
        void setname(string name, int enrollment_num){
            this->name = name;
            this->enrollment_num = enrollment_num;
        }
        void display_data(){
            cout<<"Enrollment number:"<<enrollment_num<<endl;
            cout<<"Name of the student is :"<<name<<endl;
        }
    };
int main(){
    students obj;
    obj.setname("Aayush", 20);
    obj.display_data();
}