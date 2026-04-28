#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left[n];
    int first = arr[0];

    for (int i = 0; i < n - 1; i++) {
        left[i] = arr[i + 1];
    }
    left[n - 1] = first;

    cout << "Left Rotation: ";
    for (int i = 0; i < n; i++) {
        cout << left[i] << " ";
    }
    cout << endl;

    int right[n];
    int last = arr[n - 1];

    for (int i = 1; i < n; i++) {
        right[i] = arr[i - 1];
    }
    right[0] = last;

    cout << "Right Rotation: ";
    for (int i = 0; i < n; i++) {
        cout << right[i] << " ";
    }

    return 0;
}