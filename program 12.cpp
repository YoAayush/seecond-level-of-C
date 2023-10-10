#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of an array: ";
    cin>>size;

    int array[size];
    cout<<"enter the elements of the array:"<<"\n";
    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    cout<<"your entered elements are:"<<"\n";
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }

    int check, i=0;
    cout<<"\n"<<"enter the element to do a linear search in the array: ";
    cin>>check;
    while(1){
        if(array[i]==check){
            cout<<"the element is present at index "<<i;
            break;
        }
        i++;
    }
}