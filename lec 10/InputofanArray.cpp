
// printing array elements by taking input 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Input size of array : ";
//     cin>>n;
//     cout<<"Enter the value in array : ";
//     int Input_array[n];
//     for(int i = 0;i<n;i++){
//         cin>>Input_array[i];
//     }
//     cout<<"Output the element ";
//     for(int i = 0;i<n;i++){
//         cout<<Input_array[i]<< " ";
//     }


//     return 0;
// }


/*problem
arr = 2 5 3 8
output = 20 50 30 80 
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;

    cout<<"Enter the value in array ";
    int input_array[n];   //spc = 1
    for(int i = 0;i<n;i++){
        cin>>input_array[i];
    }

    int arr[n];    // spc =  N
    for(int i = 0;i<n ; i++){ // copy    spc = N  // Tc N
        arr[i] = input_array[i]*10;

    }
    for (int i = 0; i<n;i++){  //SPC =  1    //printing final value   // Tc  O(N)  /// Spc  = N+N+1 = 2N+2= O(N)
        cout<<arr[i]<<" ";                       
    }
    
     // final time comp = N+N = 2N remove the constant  and final time complextiy is = log O(N)
     // Time complexity , ===> O(N) 

    //  space complexity ??
    // input wale ko check nhi krna 

    for (int i = 0 ; i< n ;i++){
        if(arr[i]%2 == 0)
    }



    return 0;
}