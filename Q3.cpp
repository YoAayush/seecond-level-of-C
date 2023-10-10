#include<iostream>
using namespace std;
class simpleInterest{
    private:
        float Prin_amt;
        float rate;
        int time;

    public:
        void getdata(float amt, float rt, int tm){
            Prin_amt = amt;
            rate = rt;
            time = tm;
        }

        float showInterst(){
            float interest_value;
            interest_value = (Prin_amt*rate*time)/100;
            cout<<"value of simple interest : "<<interest_value<<"\n";
            return interest_value;
        }
};

int main(){
    float rt,amt;
    int tm;
    cout<<"enter the data to calculate simple interest:"<<"\n";
    cout<<"Principal amount : ";
    cin>>amt;
    cout<<"Rate of Interest  %:"; 
    cin >>rt;
    cout << "Time period in years :" ;
    cin >>tm;

    simpleInterest obj;
    obj.getdata(amt,rt,tm);
    obj.showInterst();
}