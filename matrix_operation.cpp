#include<iostream>
using namespace std;
class matrix{
	int matX[2][2],matY[2][2];
	public:
		void getmatX(){
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					cout<<"Enter matX["<<i<<"]["<<j<<"] : ";
					cin>>matX[i][j];
				}
			}
		}
		void getmatY(){
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					cout<<"Enter matY["<<i<<"]["<<j<<"] : ";
					cin>>matY[i][j];
				}
			}
		}
		void add(){
			cout<<"\nAdded Matrix :\n";
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					cout<<matX[i][j]+matY[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
		void sub(){
			cout<<"\nSubtracted Matrix :\n";
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					cout<<matX[i][j]-matY[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
		void mul(){
			cout<<"\nMultiplied Matrix :\n";
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					cout<<matX[i][j]*matY[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
};
int main(){
	matrix act;
	int op;
	act.getmatX();
	act.getmatY();
	cout<<"Enter Operation :\n1. Add\n2. Subract\n3. Multiply\n";
	cin>>op;
	switch(op){
		case 1:
			act.add();
			break;
		case 2:
			act.sub();
			break;
		case 3:
			act.mul();
			break;
		default:
			cout<<"Invalid Operation";
	}
}
