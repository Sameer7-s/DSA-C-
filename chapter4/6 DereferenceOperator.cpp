#include<iostream>
using namespace std;
int main(){
    int x = 12;
    int* ptr = &x;
    cout<<x<<endl; // 12

    *ptr = 23;
    cout<<x<<endl; // 23

    return 0;
}