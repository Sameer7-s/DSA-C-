#include<iostream>
using namespace std;
int main(){
    string str = "Sameer";

    for(int i = 0;str[i] !='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -=  32; // lower case to upper case condition 
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i] += 32; // upper case to lower case
        }

    }
    cout<<"Converted string :"<<str<<endl;



    return 0;
}