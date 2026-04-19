// #include<iostream>
// using namespace std;
// int main()
// {
//     // 5 integers -. 9,6,7,5,1
//     int arr[5] ; //declaration
//     arr[0] = 9;  //set
//     arr[1]= 6;
//     arr[2]= 7;
//     arr[3]= 5;
//     arr[4]= 1;
//     cout<<arr[0]<<" ";
//     cout<<arr[1]<<" ";
//     cout<<arr[2]<<" ";
//     cout<<arr[3]<<" ";
//     cout<<arr[4]<<" ";


//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     // 5 integers -. 9,6,7,5,1
//     int arr[5] ; //declaration

//     for(int  i = 0; i<=4;i++){
//         cin>>arr[i];
//     }

//     for(int  i = 0; i<=4;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// // printing double value of an array


// #include<iostream>
// using namespace std;
// int main()
// {
//     // 5 integers -. 9,6,7,5,1
//     int arr[5] ; //declaration
//     cout<<"Enter array elements : ";

//     for(int  i = 0; i<=4;i++){
//         cin>>arr[i];
//     }

//     for(int  i = 0; i<=4;i++){
//         cout<<arr[i]*2<<" ";
//     }
//     return 0;
// }


//// updation of an value in a array 



#include<iostream>
using namespace std;
int main()
{
    // 5 integers -. 9,6,7,5,1
    int arr[5] ; //declaration
    cout<<"Enter array elements : ";

    for(int  i = 0; i<=4;i++){
        cin>>arr[i];
    }

    for(int  i = 0; i<=4;i++){
        cout<<arr[i]*2<<" ";
    }
    arr[0] = 41;
    cout<<endl;
    for(int i = 0; i<=4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}