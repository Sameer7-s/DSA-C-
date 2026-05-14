#include<iostream>
using namespace std;
// creating Node
class Node{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main(){
    Node A1(4); // this is not dynamic way of creating object 
    /// object creation with dynamic way'
    Node *Head; 
    Head = new Node(4);
    cout<<Head->data<<endl;
    cout<<Head->next<<endl;

}