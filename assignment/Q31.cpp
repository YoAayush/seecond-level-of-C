#include<iostream>
using namespace std;
class employee{
    protected:
    int emp_id;
    string emp_name;

    public:
    void get_data();
};

void employee::get_data(){
    cout<<"enter employee name: ";
    cin>>emp_name;
    cout<<"enter employee id: ";
    cin>>emp_id;
}

class emp_union{
    protected:
    int member_id;

    public:
    int get_mem_id();
};

int emp_union::get_mem_id(){
    cout<<"enter member id: ";
    cin>>member_id;
    return member_id;
}

class emp_info:public employee, public emp_union{
    protected:
    float basic_salary;

    public:
    float get_sal();
    void display_data();
};

float emp_info::get_sal(){
    cout<<"enter employee salary: ";
    cin>>basic_salary;
    return basic_salary;
}

void emp_info::display_data(){
    cout<<"Employee Name: "<<emp_name<<endl;
    cout<<"Employee ID: "<<emp_id<<endl;
    cout<<"Member ID: "<<member_id<<endl;
    cout<<"Basic Salary: "<<basic_salary<<endl;
}

int main(){
    emp_info obj;
    obj.get_data();
    obj.get_mem_id();
    obj.get_sal();
    obj.display_data();

return 0;
}