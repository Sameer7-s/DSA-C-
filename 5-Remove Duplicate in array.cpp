// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     // Input size
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int arr[n];

//     // Input elements
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Frequency array (initialize with 0)
//     int freq[1000] = {0};  // assuming values are between 0–999

//     cout << "Array after removing duplicates: ";

//     for (int i = 0; i < n; i++) {
//         // If element not seen before
//         if (freq[arr[i]] == 0) {
//             cout << arr[i] << " ";   // print it
//             freq[arr[i]] = 1;        // mark as seen
//         }
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter number of elements : ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements ";
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
int freq[1000]  ={0};
cout<<"Array after removing duplicates : ";

for(int i = 0 ; i < n;i++){
    if(freq[arr[i]] == 0){
        cout<<arr[i]<<" ";
        freq[arr[i]] = 1;
    }
}
return 0;
}































