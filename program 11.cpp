#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of the matrix: ";
    cin>>size;
    int a[size][size], b[size][size], c[size][size];
    cout<<"enter the elements of the first matrix:"<<"\n";
    for(int i=0; i<size; i=i+1){
        for(int j=0; j<size; j=j+1){
            cin>>a[i][j]; //values for matrix a.
        }
    }

    cout<<"enter the elements of the second matrix:"<<"\n";
    for(int i=0; i<size; i=i+1){
        for(int j=0; j<size; j=j+1){
            cin>>b[i][j]; //values for matrix b.
        }
    }

    cout<<"the sum of both matrices are:"<<"\n";
    for(int i=0; i<size; i=i+1){
        for(int j=0; j<size; j=j+1){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    for(int i=0; i<size; i=i+1){
        for(int j=0; j<size; j=j+1){
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
}