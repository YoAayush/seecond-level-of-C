// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2
// 1

#include<iostream>
using namespace std;
int main(){
    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            cout<<i<<"\t";
        }
        cout<<endl;
    }
}
