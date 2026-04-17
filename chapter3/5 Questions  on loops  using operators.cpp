/// WAP TO FIND THE COUNT OF THE GIVEN NUMBER 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter  number : ";
//     cin>>n;

//     int count = 0;
//     while(n>0){
//         n = n/10;
//         count++;

//     }
//     cout<<count;

//     return 0;
// }

/// WAP TO FIND THE sum of the digit of a given number 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int sum = 0;
    
//     while(n>0){
//         int ld = n%10;
//         n /=10; // n = n/10
//         sum += ld;   
//     }
//     cout<<sum;
// }

//  Write a program to print the product of given number 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int prod = 1;
    
//     while(n>0){
//         int ld = n%10;
//         n /=10;        // n = n/10
//         prod *= ld;   //  prod = ld*prod
//     }
//     cout<<prod;
// }

// write a program to print the reverse of the given number 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int rev= 0;
    
//     while(n>0){
//         int ld = n% 10;
//         rev = rev*10+ld;  
//         n /=10; 
//     }
//     cout<<rev;
    
// }

//// Write a programm to print the sum of the given number and its reversed number 


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter  number : ";
//     cin>>n;

//     int count = 0;
//     int rev = 0;
//     while(n>0){
//         int ld = n%10;
//         n = n/10;
//         rev = rev*10+ld+n;
        
//         count++;
//     }
//     cout<<count+rev;
//     //  int rev= 0;
    
//     // while(n>0){
//     //     int ld = n% 10;
//     //     rev = rev*10+ld;  
//     //     n /=10; 
//     // }
//     // cout<<rev;
    

//     return 0;
// }


// factorial of a given number 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number :  ";
//     cin>>n;
//     int fact = 1;
//     for(int i = 1;i<=n;i++){
//         fact *=i;
//     }
//     cout<<fact;
//     return 0;
// }