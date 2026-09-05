/*
C++ Menu-Driven Program for String Operations

This program performs:

Reverse a String
Check Palindrome
Convert to Uppercase
Convert to Lowercase
 */
#include<iostream>
using namespace std;
int main(){
    string str;
    int choice;
    cout<<"Enter a string : ";
    cin>>str;

    cout<<"\n Reverse string ";
    cout<<"\n Palindrome ";
    cout<<"\n convert to uppercase ";
    cout<<"\n convert to lowerCase ";

    cout<<"\n Enter choice : ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"Reversed String :";
        for(int i = str.length()-1;i>=0;i--){
            cout<<str[i];
        }
        break;
    case 2:
    {
        cout<<"Palindrome ";
        bool palindrome = true;
        int len = str.length();
        for(int i = 0;i<len/2;i++){
            if(str[i] != str[len-i-1]){
                palindrome = false;
                break;
            }
        }
        if(palindrome){
            cout<<"palindrome";
        }else{
            cout<<"Not palindrome";
        }
        break;

    }


    case 3:
    {
        cout<<"Convert Uppercase";
        for(int i = 0;i<str.length();i++){
            if(str[i]>='a' && str[i]<='z'){
                str[i] -=  32;
            }
        }
        cout<<"UpperCase : "<<str;
        break;



    }

    case 4:
      {  cout<<"Convert LowerCase";
        for(int i = 0;i<str.length();i++){
            if(str[i]>='A' && str[i]<='Z'){
                str[i] += 32;
            }
        }
        cout<<"LowerCase : "<<str;
        break;
    }

    default:
        cout<<"Invalid choice";
        break;
    }

    return 0;
}