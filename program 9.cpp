#include<iostream>
using namespace std;
int main(){
    int marks;
	cout<<"enter your marks: ";
    cin>>marks;
    //checking invalid marks
    if((marks<=0)||(marks>100)){
        cout<<"invalid marks";
    } 
    else if((marks>=90)){
        cout<<"your grade is : O";
    } 
    else if((marks>=80) && (marks<90)){
        cout<<"your grade is : A";
    }
    else if((marks>=60) && (marks<80)){
        cout<<"your grade is : B";
    } else if(marks<60){
        cout<<"you are fail";
    }
}
