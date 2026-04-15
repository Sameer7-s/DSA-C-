#include<iostream>
using namespace std;
int main()
{
    ///increment operators // post decrement
   float x = 5;
   cout<<x<<endl; //op = 5

   x = x + 1; ///increment 
   cout<<x<<endl; ///op = 6

   ++x;  /// pre increment
   cout<<x<<endl;   /// op = 7

    x++;  /// pre increment phle x ki value ko use kro and fir use increment kro 
   cout<<x<<endl;   /// op = 8


   --x;  /// post decrement
   cout<<x<<endl;   /// op = 7

    x--;  /// post decrement 
   cout<<x<<endl;   /// op = 6

//    three way of incrementing a number 
//    x = x + 1;
//    x += 1;
//    x++;
  
}


#include<iostream>
using namespace std;
int main(){
    int x = 4;
    cout<<x<<endl;   //4
    cout<<x++<<endl;//4
    cout<<x<<endl; //5
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int x = 4;
    cout<<x<<endl;   //4
    cout<<++x<<endl;//5
    cout<<x<<endl; //5
    return 0;
}