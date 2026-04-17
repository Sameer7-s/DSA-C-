// #include<iostream>
// using namespace std;
// int main()
// {
//     // to find the highest factor of a number 'n' (other than n itself)

//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     int f = 1;
//     for(int i = 1; i<n/2 ; i++){
//         if(n%i == 0) 
//         f = i;
//     }
//     cout<<f;

//     return 0;
// }


// break example 

// #include<iostream>
// using namespace std;
// int main()
// {
//     // to find the highest factor of a number 'n' (other than n itself)

//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     for(int i = n/2; i>=1 ; i--){
//         if(n%i == 0) {
//             cout<<i<<" ";
//             break;  // to get out from the loop 
//         }
//     }
// }



// /// WAP TO CHECK IF A NUMBER IS COMPOSITE OR NOT
/*
prime =  when a number has extra factors except 1 and n 
// composite = agr 1 and n se jayda hai to composite 
// */

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     bool flag = true;
//     for(int i = 2; i<=n/2;i++){
//         if(n%i == 0){
//             flag = false;
//             break;
//         }
//     }
//     if(n == 1) cout<<"Neither Prime nor Composite number";
//     else if(flag==true) cout<<"Prime";
//     else cout<<"Composite";

// }

// 2nd method

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    bool flag = true;
    for(int i = 2; i<=sqrt(n);i++){
        if(n%i == 0){
            flag = false;
            break;
        }
    }
    if(n == 1) cout<<"Neither Prime nor Composite number";
    else if(flag==true) cout<<"Prime";
    else cout<<"Composite";

}



