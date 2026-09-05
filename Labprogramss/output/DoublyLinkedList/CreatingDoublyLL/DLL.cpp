// #include<iostream>
// using namespace std; 
// class Node
// {
//     public:
//     int data; 
//     Node *next;
//     Node *prev;

//     Node(int x){
//         data = x;
//         prev = NULL;
//         next = NULL;

//     }
// };
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     // creating the head pointer 
//     Node *head = new Node(arr[0]);
//     Node *first = head;
//     for(int i = 1;i<5;i++){
//         first->next = new Node(arr[i]);
//         head->next->prev = first;
//         first = first->next;
//     };
//     first = head;
//     while(first){
//         cout<<first->data<<" ";
//         first = first->next;
//     }

//     return 0;
// }
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int value ){
        value = data;
        prev = NULL;
        next = NULL;
    }
};
int main()
{
    int arr[5] =



    return 0;
}