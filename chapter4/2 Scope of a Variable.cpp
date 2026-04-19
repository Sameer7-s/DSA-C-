// scope := accesing  a value in a particular area or line of code

#include<iostream>
using namespace std;
int main(){
    for(int i = 1;i<=5;i++){ // scope of i is only in the loop not the outside of the loop
        cout<<i<<endl;
    }
    cout<<i<<endl; // this shows eror undeclared identifier
}


#include<iostream>
using namespace std;
int main(){
    int i; // this is global scope valid inside and outside
    for( i = 1;i<=5;i++){ 
        cout<<i<<endl;
    }
    cout<<i<<endl; 
}