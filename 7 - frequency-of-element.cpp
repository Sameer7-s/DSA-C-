#include <iostream>
using namespace std;
int main(){
    int a[7]={1,2,1,3,1,4,5};
    int n=7;
    int frequency=0;
    for (int i=0; i<n; i++){
        if (a[i]==1)
            frequency++;
    }
    cout << "Frequency of 1: " << frequency << endl;
    return 0;
}