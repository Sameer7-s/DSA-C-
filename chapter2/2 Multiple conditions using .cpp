// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     if(n>99 && n<1000) //and or && both we can use
//         cout<<"Three digit number";
//     else
//         cout<<"Not a three digit number";

//     return 0;
// }

//// question take a postive integer and tell iff it is divisible by 5 and 3 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     if(n%5 == 0 && n % 3 == 0) //and or && both we can use
//         cout<<"The number is divisible by three and five";
//     else
//         cout<<"Not divisible by three and five ";

//     return 0;
// }


/// question take a postive integer input and tell if it is divisible by 5 or 3 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     if(n%5 == 0 or n % 3 == 0) // or and ||both we can use
//         cout<<"The number is divisible by three and five";
//     else
//         cout<<"Not divisible by three and five ";

//     return 0;
// }


/// QUESTION TAKE 3 NUMBERS INPUT AND TELL IF THEY CAN BE SIDES OF A TRIABGLE 


// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter side A  : ";
//     cin>>a;

//     int b;
//     cout<<"Enter side B : ";
//     cin>>b;

//     int c;
//     cout<<"Enter side C  : ";
//     cin>>c;

//     if((a+b)>c and (b+c)>a and (c+a)>b) // or and ||both we can use
//         cout<<"this is a triangle";

        
//     else
//         cout<<"Invalid triabgle ";

//     return 0;
// }

//// QUESTIONS TAKE 3 POSTIVE INTEGERS INPUT AND PRINT THE GREATEST OF THEM 


// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter 1st number  : ";
//     cin>>a;

//     int b;
//     cout<<"Enter 2nd number : ";
//     cin>>b;

//     int c;
//     cout<<"Enter 3rd number : ";
//     cin>>c;

//     if(a>b and a>c) // or and ||both we can use
//         cout<<a<<" is greatest";
//     else if(b>a and b>c){
//         cout<<b<<" is greatest";
//     }
//     else
//         cout<<c<<" is greatest";

//     return 0;
// }

//// take marks as a input and print students grades


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter marks  : ";
//     cin>>n;
//     if(n>=81 and n<=100){
//         cout<<"Very Good";
//     }
//     if(n>=61 and n<=80){
//         cout<<"Good";
//     }
//     if(n>=41 and n<=60){
//         cout<<"Average";
//     }
//     // if(n<=40){
//     //     cout<<"Fail";
//     // }
//     else{
//         cout<<"Fail";
//     }
//     return 0;
// }




#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter marks  : ";
    cin>>n;
    if(n>=81 and n<=100){
        cout<<"Very Good";
    }
    else if(n>=61){
        cout<<"Good";
    }
    else if(n>=41 ){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}












