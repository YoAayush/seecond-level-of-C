#include<iostream>
using namespace std;
class matrix{
    private:
        int matrix1[2][2];
        int matrix2[2][2];

    public:
        void acceptsData(int elements1[2][2], int elements2[2][2]){
            for(int i=0;i<2;i=i+1){
                for(int j=0;j<2;j=j+1){
                    // matrix1[i][j] = elements1[i][j];
                    // matrix2[i][j] = elements2[i][j];
                    //with the use of constructor below :-
                    this->matrix1[i][j] = elements1[i][j];
                    this->matrix2[i][j] = elements2[i][j];
                }
            }
        }

        void displays(){
            cout<<"Matrix 1 :"<<endl;
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    cout<<matrix1[i][j]<<" ";
                }
                cout<<endl;
            }

            cout<<"Matrix 2 :"<<endl;
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    cout<<matrix2[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        void sum(){
            int resultant_sum[2][2];
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    resultant_sum[i][j] = matrix1[i][j] + matrix2[i][j];
                }
            }

            //showing the result of sum of matrixes
            cout<<"Resultant Matrix after doing the sum of two matrixes :"<<endl;
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    cout<<resultant_sum[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        void transpose(){
            int transpose_matrix1[2][2], transpose_matrix2[2][2];
            for(int i=0; i<2; i++){
                for(int j=0; j<2; j++){
                    if(i==j){
                        transpose_matrix1[i][j] = matrix1[i][j];
                        transpose_matrix2[i][j] = matrix2[i][j];
                    } else{
                        transpose_matrix1[i][j] = matrix1[j][i];
                        transpose_matrix2[i][j] = matrix2[j][i];
                    }
                }
            }

            //showing transpose matrixes.
            cout<<"Transpose of first matrix :"<<"\n";
            for(int i=0; i<2; i++){
                for(int j=0; j<2; j++){
                    cout<<transpose_matrix1[i][j]<<" ";
                }
                cout<<endl;
            }

            cout<<"Transpose of second matrix :"<<"\n";
            for(int i=0; i<2; i++){
                for(int j=0; j<2; j++){
                    cout<<transpose_matrix2[i][j]<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){
    int mat1[2][2], mat2[2][2];
    cout << "Enter first matrix:"<<"\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>mat1[i][j];
        }
    }

    cout << "Enter second matrix:"<<"\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>mat2[i][j];
        }
    }

    matrix obj;
    obj.acceptsData(mat1,mat2);
    obj.displays();
    obj.sum();
    obj.transpose();
}