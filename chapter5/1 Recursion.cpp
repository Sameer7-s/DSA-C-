///// when function calls itself until a certain condition met
/* uses 

replace the for loops
solve a bigproblem 
*/

// #include<iostream>
// using namespace std;
// void greet(){
//     cout<<"Hey"<<endl;
//     greet();
// }
// int main(){
//     greet();

//     return 0;
// }

///print n to 1

// #include<iostream>
// using namespace std;
// void print(int n){
//     cout<<n<<endl;
//     print(n-1);
// }
// int main(){
//     print(3);

//     return 0; ///output is continueosly runnig  
// }


///// correct way of doing this by recursion 

// #include<iostream>
// using namespace std;
// void print(int n)
// {
//     if (n == 0) // base case
//         return;
//     cout<<n<<endl; //work
//     print(n-1);  //call
// }
// int main(){
//     print(10);

//     return 0; 
// }

//// print 1 to n

// #include<iostream>
// using namespace std;
// void print(int x,int n)
// {
//     if (x>n) return;
//     cout<<x<<endl;
//     print(x+1,n);
// }
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     print(1,n);

//     return 0; 
// }

//// print 1 to n without  using extra parameter

// #include<iostream>
// using namespace std;
// void print(int n)
// {
//     if (n == 0)  return; // base condition 
//     print(n-1);  //call
//     cout<<n<<endl; //work
 
// }
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     print(n);

//     return 0; 
// }


///print sum from 1 to n ( return Type)  with recursion


// #include<iostream>
// using namespace std;
// int sum(int n)
// {
//     if(n == 1)  return 1;
//     return n + sum(n-1);
// }
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     cout<<sum(n);

//     return 0; 
// }



// make a function which calculates the factorial of n using recursion 


// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//     if(n == 1 or n == 0 ) return 1;
//     return n * fact(n-1);
// }
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     cout<<fact(n);

//     return 0; 
// }


// // Make a function which calculates 'a' raised to the power 'b' usinf recursion


// #include<iostream>
// using namespace std;
// int power(int a , int b)
// {
//     if( b == 0 ) return 1;
//     return a * power(a,b-1);
// }
// int main()
// {
//     int a;
//     cout<<"Enter base : ";
//     cin>>a;

//     int b;
//     cout<<"Enter exponent : ";
//     cin>>b;

//     cout<<a<<" raised to power "<<b<<" is "<< power (a,b);

    

//     return 0; 
// }



/// multiple calls {Questions write a function to calculate the nth fibonnacci number using the recursion }

#include<iostream>
using namespace std;
int fibo(int n)
{
    if( n == 1 || n == 2 ) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n; 
    cout<<fibo(n);
    return 0; 
}
















