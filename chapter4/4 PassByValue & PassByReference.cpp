// pass by value

// #include<iostream>
// using namespace std;
// void swap(int x , int y){
//     int temp = x;
//     x = y;
//     y = temp;
// }
// int main(){
//      ////pass by value actual values only called

//     cout<<"Before Swapping : ";
//     int x = 2;
//     int y = 5;
//     cout<<x<<" "<<y<<endl;
//     swap(x,y);
//     cout<<x<<" "<<y<<endl;


//     return 0;
// }


//// pass by reference

#include<iostream>
using namespace std;
void swap(int& x , int& y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
     ////pass by refrence

    cout<<"Before Swapping : ";
    int x = 2;
    int y = 5;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;


    return 0;
}