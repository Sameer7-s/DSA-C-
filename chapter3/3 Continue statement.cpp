/*CONTINUE STATEMENT 
if you want to skip a round in a loop
 */


// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i = 1; i<=20;i++){
//         // if(i!=3 ) continue;
//         // if (i!= 8) continue;

//         if (i == 2)
//             continue;
//         if (i == 6)
//             continue;
//          cout<<i<<" ";
//     }

//     return 0;

// }

////WAP TO PRINT even  NUMBERS FROM 1 TO 100


// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i = 1; i<=100;i++){
//         // if(i!=3 ) continue;
//         // if (i!= 8) continue;
        
//         if (i%2 != 0)
//             continue;

//          cout<<i<<" ";
//     }

//     return 0;

// }

//// print odd number from 1 to 100

#include<iostream>
using namespace std;
int main()
{
    for(int i = 1; i<=100;i++){  
        if (i%2!= 1)
            continue; cout<<i<<" ";
    }

    return 0;

}





