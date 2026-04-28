#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size of array
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    // Input array elements
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];   // Add each element to sum
    }

    // Calculate average
    float average = (float)sum / n;

    // Output result
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}