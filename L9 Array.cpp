// // ARRAY IT IS A COLLECTION OF SAME DATA TYPE it stored at contiguous location
// #include<iostream>
// using namespace std;
// int main()
// {
//    int arr[5];
//    //by manual method 
//    arr[0]=1;
//    arr[1]=23;
//    arr[2]=33;
//    arr[3]=45;
//    arr[4]=57;
//    for(int i = 0;i<5;i++)
//    cout<<arr[i]<<" ";
//     return 0;
// }

//// sum of array is 



// #include<iostream>
// using namespace std;
// int main()
// {
//    int arr[5];
//    //by manual method 
//    arr[0]=1;
//    arr[1]=23;
//    arr[2]=33;
//    arr[3]=45;
//    arr[4]=57;
   
//    int sum = 0;

//    for(int i = 0;i<5;i++)
//    {
//     sum = sum+arr[i];
//    }
//    cout<<sum;
//     return 0;
// }

// REVERSE OF AN ARRAY 

// #include<iostream>
// using namespace std;
// int main()
// {

//     int arr[5] ={6,5,4,3,7};
//     for (int i =4 ; i>=0;i--)
//     {
//         cout<<arr[i]<<endl;
//     }
// return 0;
// }





///// how to find largest value from a array

// #include<iostream>
// using namespace std;
// int main()
// {

// int arr[6] ={6,5,3,11,2,7};
// int largest = arr[0];

// //largest = 6;
// for(int i = 1; i<=5;i++)
// {
//     if(arr[i]>largest)
//     largest = arr[i];
// }
// cout<<largest;  
// return 0;
// }




// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     arr[0] = 25;
//     arr[1] = 51;
//     arr[2] = 45;
//     arr[3]  = 48;
//     arr[4] = 85;


//     int sum = 0;
//     for(int i = 0;i<5;i++){
//         cout<<arr[i]<<endl;
//         sum = sum+arr[i];
//     }
//     cout<<sum;
//     return 0;
// }



//reverse of an array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {6,5,3,2,7};
//     for(int i = 4;i>=0;i--)
//     cout<<arr[i]<<endl;

//     return 0;
// }


//  finding maximum number of an array

// #include<iostream>
// using namespace std;
// int main()
// {
//      int arr[8] = {2,3,15,15,14,16,12,20};
//      int largest = arr[0];
//      for (int i = 1;i<8;i++)
//      {
//         if(arr[i]>largest)
//         largest = arr[i];
//      }
//     cout<<largest;


//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {


//     return 0;
// }











// finding minimum element from an array
// #include<iostream>
// using namespace std;
// int main()
// {
//      int arr[5] = { 10,1,3,8,5};
//      int smallest = arr[0];
//      for (int i=0;i<5;i++){
//         if (arr[i]<smallest)
//            smallest = arr[i];
//      }
//      cout<<smallest<<endl;
//     return 0;
// }


// wap to print the even or odd number form an array 

// #include<iostream>
// using namespace std;
// int main()

// {
//     int arr[10]={12,2,5,7,89,44,66};
//     for (int i = 0;i<10;i++)
//     {
//        if(arr[i]%2 == 1)
//        cout<<arr[i]<<" ";
//        }
      
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()

// {
//     int arr[10]={12,-2,-5,-7,-89,44,66};
//     for (int i = 0;i<10;i++)
//     {
//        if(arr[i]%2 == 1|| arr[i] % 2 ==-1)
//        cout<<arr[i]<<" ";
//        }
      
//     return 0;     //-5 -7 -89 
// }

//for even 
// #include<iostream>
// using namespace std;
// int main()

// {
//     int arr[10]={12,2,5,7,89,44,66};
//     for (int i = 0;i<10;i++)
//     {
//        if(arr[i]%2 == 0)
//        cout<<arr[i]<<" ";
//        }
      
//     return 0;
// }

/// TO CHECK PRIME NUMBER OR NOT A PRIME NUMBER 

// #include<iostream>
// using namespace std;

// void prime(int num)
// {
//     if(num<2)
//     return ;

//     for(int i=2;i<= num-1;i++)
//     {
//         if(num%i==0)
//         return;
//     }
//     cout<<num<<" ";
//     return;
// }
// int main()
// {
//    int arr[5] = {1,3,12,5,7};

//    for(int i =0;i<5;i++)
//    {
//     prime(arr[i]);
//    }

//    return 0;

// }


// ROTATE A ARRAY LIKE [2,5,7,11,3]====>[3,2,5,7,11]

// #include<iostream>
// using namespace std;
// int main()

// {
//    int arr[8] = {2,3,4,5,8,6,15,45};
//    int num = arr[7];
//    for (int i = 6; i>=0;i--)
//    {
//    arr[i+1] = arr[i];
//    }
//    arr[0] = num;
   
//    for(int i = 0;i<8;i++)
//    cout<<arr[i]<<" ";
//    return 0;

// }


// #include<iostream>
// using namespace std;
// int main(){


//     return 0;
// }



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int m = n - 1;

    for(int i=0;i<m ;i++){
        for(int j=0;j<m-i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        m--;   // decrease range after every pass
    }

    cout<<"Sorted array:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}





























