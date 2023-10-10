#include<iostream>
using namespace std;

void Add(int elements1[2][2], int elements2[2][2]){
    int resultant_sum[2][2];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            resultant_sum[i][j] = elements1[i][j] + elements2[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<resultant_sum[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void Subtract(int elements1[2][2], int elements2[2][2]){
    int resultant_difference[2][2];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            resultant_difference[i][j] = elements1[i][j] - elements2[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<resultant_difference[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void Multiply(int elements1[2][2], int elements2[2][2]){
    int resultant_multiply[2][2];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            resultant_multiply[i][j] = elements1[i][j] * elements2[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<resultant_multiply[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int mat1[2][2],mat2[2][2],choice;
    cout<<"Enter the elements of the matrix 1:"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"("<<i<<","<<j<<") : ";
            cin>>mat1[i][j];
        }
    }

    cout<<"Enter the elements of the matrix 2:"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"("<<i<<","<<j<<") : ";
            cin>>mat2[i][j];
        }
    }

    while(1){
        cout<<"Choose an operation from below:"<<endl;
        cout<<"1.Addition"<<endl;
        cout<<"2.Subtraction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cin>>choice;
        switch(choice){
            case 1: Add(mat1,mat2);
                    break;
            case 2: Subtract(mat1,mat2);
                    break;
            case 3: Multiply(mat1,mat2);
                    break;
            default: exit(1);
        }
    }

return 0;
}