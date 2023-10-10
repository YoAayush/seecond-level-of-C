#include<iostream>
using namespace std;
int main(){
    int num = 15,sum = 0, SumOfSquares = 0;
    for(int i=2; i<=num*2; i+=2){
        sum+=i;
        SumOfSquares+=(i*i);
    }

    cout<<"Sum of first 15 even integers are: "<<sum<<endl;
    cout<<"sum of squares of first 15 even integers are: "<<SumOfSquares<<endl;

return 0;
}