// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *prev;
//     Node *next;

//     // creating constructor 
//     Node(int value){
//         data = value;
//         prev = NULL;
//         next = NULL;
//     }
// };
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     Node *head = new Node(arr[0]);
//     Node *first = head;
//     for(int i = 1;i<6;i++){
//         first->next = new Node(arr[i]);
//         first->next->prev = first;
//         first = first->next;
//     }
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
    Node *next;
    Node *prev;
    // creating the constructor 

    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};
int main(){
    int arr[5] = {10,20,30,40,50};
    Node *head = new Node(arr[0]);
    Node *first = head;
    for(int i = 1;i < 6 ;i++){
        first->next = new Node(arr[i]);
        first->next->prev = first;
        first = first->next;
    }
    first = head;
    while(first){
        cout<<first->data<<" ";
        first = first->next;
    }
    return 0;
}