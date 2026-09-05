#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};
int main(){
    Node *head = new Node();
    head->data = 20;
    head->next = NULL;

    // insert newnode at begining 
    Node *newNode = new Node();
    newNode->data = 10;

    // linking the data 
    newNode->next = head;
    head = newNode;

    // traverse and display 
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }




    return 0;
}