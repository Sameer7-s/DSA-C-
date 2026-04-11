// #include <iostream>
// using namespace std;

// int main() {
//     int arr[100] = {10, 20, 30, 40};
//     int n = 4;


//     // Shift elements left
//     for (int i = 0; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }

//     n--; // reduce size

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

// postion based (confusing )
#include<iostream>
using namespace std;

int main()
{
    int arr[100] = {10,20,30,40};
    int n = 4;
    int pos = 2;  // delete 2nd position

    // shift elements left
    for(int i = pos - 1; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }

    n--;  // reduce size

    // print result
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}


#include<iostream>
using namespace std;

int main(){
    int arr[100] = {10, 20, 30, 40};
    int n = 4;
    int pos = 2;  // delete 2nd position

    // shifting using your method
    for(int i = pos; i < n; i++){
        arr[i - 1] = arr[i];
    }

    n--;  // reduce size

    // print array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}