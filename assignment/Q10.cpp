#include<iostream>
#include<string.h>
using namespace std;

bool palindrome(char* s){
    int len = strlen(s);
    for(int i=0; i<len; i++){
        if(s[i] != s[len-i-1]){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    char str[30];
    cout<<"Enter any string: ";
    gets(str);
    cout<<"you have entered the string: ";
    puts(str);
    
    bool x = palindrome(str);
    if(x){
        cout<<"string is palindrome"<<endl;
    } else{
        cout<<"string is not palindrome"<<endl;
    }
return 0;
}