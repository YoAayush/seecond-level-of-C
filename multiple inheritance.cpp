#include<iostream>
using namespace std;

class worker{
    protected:
    int worker_id;
    string worker_department;
    float salary;

    public:
    void accepting_data(int w_id,string w_dep,float sal){
        worker_id=w_id;
        worker_department = w_dep;
        salary = sal;
    }
};

class officer{
    protected:
    float da,hra;

    public:
    void officer_data(float da1,float hra1){
        da = da1;
        hra = hra1;
    }
};

class manager:public worker,public officer{
    protected:
    float ta;
    float gross_sal;

    public:
    void display(){
        ta = 0.1 * salary;
        gross_sal = salary + ta + da + hra;
        cout<<"TA: "<<ta<<endl;
        cout<<"gross Salary: "<<gross_sal<<endl;
    }
};

int main(){
    int wor_id;
    string wor_dep;
    float sal1,da1,hra1;
    cout<<"enter the details:\n";
    cout<<"worker id:";
    cin>>wor_id;
    cout<<"worker department: ";
    cin>>wor_dep;
    cout<<"salary: ";
    cin>>sal1;
    cout<<"DA: ";
    cin>>da1;
    cout<<"HRA: ";
    cin>>hra1;

    manager obj;
    obj.accepting_data(wor_id,wor_dep,sal1);
    obj.officer_data(da1,hra1);
    obj.display();

    return 0;
}
