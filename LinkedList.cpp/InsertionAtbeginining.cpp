// #include <iostream>
// using namespace std;

// // creating Node
// class Node {
// public:
//     int data;
//     Node *next;

//     Node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// int main() {
//     Node *Head = NULL;

//     int arr[] = {2, 4, 6, 8, 10};

//     for (int i = 0; i < 5; i++) {
//         // Insert the node at beginning

//         if (Head == NULL) {
//             Head = new Node(arr[i]);
//         } else {
//             Node *temp = new Node(arr[i]);
//             temp->next = Head;
//             Head = temp;
//         }
//     }

//     // print the values
//     Node *temp = Head;

//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }