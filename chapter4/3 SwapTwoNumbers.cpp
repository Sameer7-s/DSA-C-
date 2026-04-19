////    SWAPING TWO NUMBERS with using 3rd varible

// #include<iostream>
// using namespace std;
// int main(){

//     cout<<"Before Swapping : ";
//     int x = 2;
//     int y = 5;
//     cout<<x<<" "<<y<<endl;

//     int temp;
//     temp = x;
//     cout<<"After Swapping : ";

//     x = y;
//     y = x;
//     y = temp;
//     cout<<x<<" "<<y<<endl;


//     return 0;
// }

//// swap two number without using third variable 

#include<iostream>
using namespace std;
int main(){

    cout<<"Before Swapping : ";
    int x = 2;
    int y = 5;
    cout<<x<<" "<<y<<endl;

    int temp;
    temp = x;
    cout<<"After Swapping : ";

    // x = y;
    // y = x;
    // y = temp;

    x = x + y;
    y = x - y;
    x = x - y ;

    cout<<x<<" "<<y<<endl;


    return 0;
}






















