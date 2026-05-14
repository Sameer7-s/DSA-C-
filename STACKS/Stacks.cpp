    // linear datastructure in which insertion & deletion only allowed at the end , called the top of the stack 
    // 1 push -- insert 
    //2 pop   -- deletion
    // 3 peak  -- check the top value from a stack 
    // overflow -- stack is full
    // underflow -- stack is empty
    // Issize -- checks the size 
    // Isempty -- check the is stack is empty 

    // principle :  LIFO  [Last  IN     First OUT ]

#include<iostream>
using namespace std;

    // implement with array 
    class Stack
    {
    int *arr;
    int size;
    int top;

    public : 
    // creating constructor
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }

    // push 
    // pop
    // peek
    // IsEmpty
    // IsSize

    // push
    void push(int value)
    {
        if(top == size - 1){
            cout<<"Stack Overflow\n";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout<<"Pushed "<< value<<" into the Stack"<<endl;
        }
    }
    // pop  
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack is underflow";
        }
        else
        {
            cout<<"Popped "<<arr[top]<<" from the stack\n";
            top--;
            // cout<<"Popped"<<arr[top+1]<<"from the stack\n" // this is also valid but top + 1 imp
        }
    }

    // peek 

    int peek()
     {
        if(top==-1)
        {
            cout<<"Stack is Empty";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    // IsEmpty
    bool IsEmpty()
    {
        return top == -1;
    }

    int  IsSize()
    {
        return top +1;
    }
};

int main()
{
    Stack s(5);

    s.push(5);
    s.push(4);
    s.push(8);
    s.push(7);
    s.push(9);

    s.pop();
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;

    cout<<s.IsEmpty()<<endl;
    cout<<s.IsSize()<<endl;

    return 0;
}