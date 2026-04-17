//// LOOPS IN C++


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i = 0 ; i<n;i++){
//         cout<<"Hello World"<<endl;
//         cout<<"Hello Sameer"<<endl;
//     }

//     return 0;
// }


// // print 1 to 100 number 

// #include<iostream>
// using namespace std;
// int main()
// {
    ////100 times loop  is running by this
    // for(int i = 1; i<=100;i++)
    // {
    //         cout<<i<<" ";
    // }
    //50 times times loop is running by this so its run fast 

//        for(int i = 2;i<=100;i = i+2){ //for even i = 2 and for odd put  i = 1
//         cout<<i<<" ";
//        }
//     return 0;
// }

///// print even from 1 to 100

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i = 1; i<=100;i++)
//     {
//          if (i%2 == 0) cout<<i<<" ";
//     }
//     return 0;
// }


///print odd from 1 to  100

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i = 1; i<=100;i++)
//     {
//          if (i%2 != 0) cout<<i<<" ";
//     }
//     return 0;
// }


// print this table AP - 1,3,5,7,9...........upto 'n'

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     for(int i = 1; i<=2*(n-1) ; i+=2)
//     {
//          cout<<i<<" ";
//     }
//     return 0;
// }

/// for printinng table 4 7 10 13
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     for(int i = 4; i<=5*n+1;i+=3)
//     {
//          cout<<i<<" ";
//     }
//     return 0;
// }
///other method of doing this


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     //4 7 10 13.........
//     int a = 4;
//     for(int i = 1; i<=n;i++)
//     {
//          cout<<a<<" ";
//          a = a + 3;
//     }
//     return 0;
// }


///display this GP 1,2,4,8,16,32,..upto 'n'


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    // //1,2,4,8,16
    // int a = 1;
    // for(int i = 1; i<=n;i++)
    // {
    //      cout<<a<<" ";
    //      a = a * 2;
    // }
    // return 0;

    ////5 15 45
    int a = 5;
    for (int i = 1;i<=n;i++){
        cout<<a<<" ";
        a = a * 3;
    }

    return 0;
}