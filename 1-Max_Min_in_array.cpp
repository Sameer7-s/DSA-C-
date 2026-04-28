// #include<iostream>
// using namespace std;
// int main()
// {
//     //  maximum and minimum element from an array 
//     int n;
//     // taking size of array 
//     cout<<"Enter number of elements : "<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//         }
//     //assume first element in both max and min 
//     int max = arr[0];
//     int min = arr[0];
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     cout<<"Minimum Element : "<<min<<endl;
//     cout<<"Max Element : "<<max<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int max = arr[0];
    int min = arr[0];

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
        else(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"MAX : "<<max<<endl;
    cout<<"MIN : "<<min<<endl;


    return 0;
}