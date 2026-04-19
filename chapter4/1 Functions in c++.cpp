/*
FUNCTIONS 

USES
1st =>  to tackle repetitions
2nd => these are certain peice of code we use a  lot of times in problems


SYNTAX


#include<iostream>
using namespace std;
int main(){
            // main functions
}


*/


// Basic example 1

// #include<iostream>
// using namespace std;

// void greet(){
//     cout<<"Good Morning"<<endl;
//     cout<<"How are you"<<endl;
// }
// int main(){
//     greet();  // function call
//     cout<<"hey"<<endl;
//     return 0;
// }


// Basic example 2


// #include<iostream>
// using namespace std;

// void usa(){
//     cout<<"You are in USA "<<endl;
// }
// void india(){
//     cout<<"You are in india"<<endl;
// }
// int main(){
//     cout<<"You are in main "<<endl;

//     india();
//     usa();
//     return 0;
// }

/*
*****************************************************
main() => it can not be called more than 1 time
return; => it is a keyword which ends the function

#include<iostream>
using namespace std;

void greet(){
    cout<<"Good Morning"<<endl;
    return; // this stop fn call here
    cout<<"How are you"<<endl;
}
int main(){
    greet();  // function call
    cout<<"hey"<<endl;
    return 0;
}

********************************************************************************************************************

These are return type not data-types;

void 
int 
float
char 

imp key points 

1) main() ek hi baar aata hai
2) start with  main
3) unilimited function

*/
// #include<iostream>
// using namespace std;

// void usa(){
//     cout<<"You are in USA "<<endl;
//     return;
// }
// void india(){
//     cout<<"You are in india"<<endl;
//     usa();
    
// }
// int main(){
//     cout<<"You are in main "<<endl;
//     india();
//     return 0;

// }
/// program of sum of 2 number 

// #include<iostream>
// using namespace std;
// int sum(int a,int b) // function parameters(Formal parameters)
// {
//     return a+b;
// }

// int main(){// pass by value
//     sum(45,80);// actual parameters (values)
// }


// #include<iostream>
// using namespace std;
// int sum(int a,int b){
//     return a+b;
// }

// int main()
// {
//     int a;
//     cout<<"Enter 1st number : ";
//     cin>>a;
    
//     int b;
//     cout<<"Enter 2nd number : ";
//     cin>>b;

//     cout<<sum(a,b);

//     return 0;
// }

///LIBRARY FUNCTIONS 
// Built in library function  sqrt(),cbrt(),min(),max(),pow(a,b)

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     cout<<sqrt(4)<<endl;
//     cout<<pow(2,3)<<endl;
//     cout<<max(4,8)<<endl;
    
// } 


////  PERMUTATION AND COMBINATION 
// finding ncr = n!/r!*(n-r)!

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;

//     int r;
//     cout<<"Enter r : ";
//     cin>>r;

//     int a = 1;
//     for( int i = 1;i<=n;i++){
//         a *=i;
//     }
//     int b = 1;
//     for(int i = 1;i<=r;i++){
//         b *= i;
//     }
//     int c = 1;
//     for(int i = 1;i<=n-r;i++){
//         c *= 1;
//     }
//     cout<<a/(b*c);

//     return 0;
// }


/// calculating factorial by other method

// #include<iostream>
// using namespace std;
// int fact(int x){
//     int f = 1;
//     for(int i = 1; i<=x;i++){
//         f *= i;
//     }
//     return f;
// }
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;

//     int r;
//     cout<<"Enter r : ";
//     cin>>r;

//     int a = fact(n);
//     int b = fact(r);
//     int c = fact(n-r);
//     cout<<a/(b*c);
//     return 0;
// }


///// pascal triangle 


#include<iostream>
using namespace std;

int fact(int x)
{
    int f = 1;
    for(int i = 1; i<=x;i++){
        f *= i;
    }
    return f;
}

int ncr(int n,int r)
{
    return fact(n)/fact(r)/fact(n-r);
}

int main()
{
    
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=n-i-1;j++){
            cout<<"  ";
        }
        for(int j = 0;j<=i;j++){
            cout<<ncr(i,j)<<"   ";
        }
        cout<<endl;
    }



    /*
    //output
            1   
          1   1
        1   2   1
      1   3   3   1
    1   4   6   4   1
  1   5   10   10   5   1
1   6   15   20   15   6   1
*/
}


#include<iostream>
using namespace







