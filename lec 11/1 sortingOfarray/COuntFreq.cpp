// #include <iostream>
// using namespace std;

// int main() {
//     int arr[100], n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     cout << "Enter elements:\n";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Frequency count
//     for(int i = 0; i < n; i++) {
//         int count = 1;

//         if(arr[i] == -1) continue; 

//         for(int j = i + 1; j < n; j++) {
//             if(arr[i] == arr[j]) {
//                 count++;
//                 arr[j] = -1; 
//             }
//         }

//         cout << arr[i] << " occurs " << count << " times\n";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
int arr[4]= {1,2,3,4};
int n = 4;
int sum = 0;
for(int i = 0;i<n;i++){
    sum += arr[i];
}
    cout<<sum<<endl;

return 0;
}