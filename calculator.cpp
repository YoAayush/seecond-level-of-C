#include<iostream>
using namespace std;
class calculator{
      private:
             int v1;
             int v2;
      
      public:
             void getdata(){
                  cout<<"enter the first number: ";
                  cin>>v1;
                  cout<<"enter the second number: ";
                  cin>>v2;
                  }
                  
            int add(){
                  return v1 + v2;
            }
                  
            int subtract(){
                return v1 - v2;
            }
            
            int multiply(){
                return v1 * v2;
            }
            
            int divide(){
                return v1 / v2;
            }
      
            int mod(){
                return v1 % v2;
            }
      };
      
      int main(){
          calculator obj;
          obj.getdata();
          int choice;
          cout<<"What do you want to do ?"<<"\n"<<"1.Add 2.Subtract 3.Multiply 4.Divide 5. Mod"<<endl;
          cin>>choice;
              switch(choice){
                case 1:
                    cout<<obj.add();
                    break;
                case 2:
                    cout<<obj.subtract();
                    break;
                case 3:
                    cout<<obj.multiply();
                    break;
                case 4:
                    cout<<obj.divide();
                    break;
                case 5:
                    cout<<obj.mod();
                    break;
                default:
                    cout<<"invalid option!!";
              }
      }
