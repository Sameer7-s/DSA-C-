// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *prev;
//     Node *next;
//     Node(int value){
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };
// int main()
// {
//     Node *head = new Node(10);
//     Node *second = new Node(20);
//     Node *third = new Node(30);

//     // connecting the nodes 
//     head->next = second;
//     second->prev = head;

//     second->next = third;
//     third->prev = second;

//     // traverse forward 

//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
class Node{
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    // creating the node 
    Node *first = new Node(10);
    Node *seocnd = new Node(20);
    Node *



    return 0;
}