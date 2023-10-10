#include<iostream>
using namespace std;
int BinaryToDecimal(int bin){
    int base = 1;
    int decimalNumber = 0;
    int LastDigit;
    while(bin>0){
        LastDigit = bin % 10;
        decimalNumber += LastDigit*base;
        bin/=10;
        base*=2;
    }
    return decimalNumber;
}
int main(){
    int binary,decimal;
    cout<<"enter a binary number: ";
    cin>>binary;
    decimal = BinaryToDecimal(binary);
    cout<<"Decimal equivalent of a binary number : "<<decimal;
return 0;
}