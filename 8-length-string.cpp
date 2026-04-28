// #include <iostream>
// using namespace std;

// int main() {
//     char str[100];
//     int length = 0;

//     // Input string
//     cout << "Enter a string: ";
//     cin.getline(str, 100);

//     // Count characters until null character
//     while (str[length] != '\0') {
//         length++;
//     }

//     // Display length
//     cout << "Length of string = " << length << endl;

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int length = 0;
    char str[100];
    cout<<"Enter a string : ";
    cin.getline(str,100);
    while(str[length] != '\0'){
        length++;
    }
    cout<<"length of string = "<<length<<endl;
}