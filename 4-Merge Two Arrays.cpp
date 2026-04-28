//Merge two arrays
#include <iostream>
using namespace std;
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int n=5;
    
    for (int i=0; i<n; i++)
        cout << arr1[i] + arr2[i] << " ";
    
    return 0;
}