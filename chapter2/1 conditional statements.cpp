// #include<iostream>
// using namespace std;
// int main(){
    
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     if(n%2==0){
//         cout<<"Even number"<<endl;
//     }
//     else{
//         cout<<"Odd number";
//         cout<<"Wow";
//     }
       
//     return 0;
// }
//// question take the integer input and print the absolute value of the integer

// #include<iostream>
// using namespace std;
// int main(){
    
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     // if(n>0){
//     //     cout<<n;
//     // }
//     // else{
//     //     cout<<-n;
//     // }

   
//     // if you want you change n into its absolute value
//     if(n<0) n = -n;
//     cout<<n;
//     return 0;
// }


 #include<iostream>
 using namespace std;
 int main()
{

    int cp;
    cout<<"Enter the cost price : "; 
    cin>>cp;
    int sp;
    cout<<"Enter selling price : ";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit is "<<sp-cp;
    }
    else if(sp<cp){
        cout<<"Loss is "<<cp-sp;
    }
    if(sp == cp){
        cout<<"No loss No profit";
    }


    return 0;
}













