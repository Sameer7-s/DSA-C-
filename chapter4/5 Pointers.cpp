/*
Acess the value of the variable whose address is in the operator 
using derefernce and  *operator

*/



// #include<iostream>
// using namespace std;
// int main()
// {
//     int x = 3;
//     int y = 5;
//     // cout<<x<<endl;  // x = 3 (value of the variable)
//     cout<<&x<<endl;  // adrress of the variable value (0x61ff0c)
//     cout<<&y<<endl;

//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int x = 3;
    int* p = &x;
    cout<<&x<<endl;     // 0x61ff08
    cout<<p<<endl;     // 0x61ff08
    cout<<x<<endl;    // 3
    cout<<*p<<endl;  //3     // p* ka mtlb p ke andr jate hai and uske andr p ka address hoga toh uss varible me jakr value ko lana 
    cout<<&p<<endl; //0x61ff08
    

    return 0;
}