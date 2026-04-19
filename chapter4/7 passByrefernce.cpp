//// SWAP TO NUMBER USING POINTERS 

#include<iostream>
using namespace std;
void swap(int* a , int* b){
    int temp =*a; // temp 12
    *a = *b;      // *a = 45
    *b = temp;    //  *b = 12
}
int main(){
    int x = 12;
    int y = 45;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;


    return 0;
}