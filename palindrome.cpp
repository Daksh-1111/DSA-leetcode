#include<iostream>
using namespace std;
int main(){
    int number = 1221;
    int originalNumber = number;
    int reversedNumber = 0;
    while(number != 0){
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number = number / 10;
    }   
    if(originalNumber == reversedNumber){
        cout<<"Palindrome"<<endl;
    }       
    else{
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;



}