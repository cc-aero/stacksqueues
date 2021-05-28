#include <iostream>
#include <queue>
using namespace std;

#define MAX 1000

class Stack {
    int top;

public:
    int a[MAX]; // Maximum size of Stack

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}




void cli(Stack stack,queue<int> q) {
    int choice;
    while (true) {

        cout <<
            "----------[Stacks&Queues]----------" << endl;
        cout << endl <<
            "Use:\n1) Stack\n2) Queue"<<endl<<">";
        cin >> choice;

        if (choice == 1) {//Stack
            cout <<
                "---------[Stack]-----------" << endl <<
                "Operations:\n1) Peek\n2) Push\n3) Pop" << endl << '>';
            cin >> choice;
            if (choice == 1) { cout << stack.peek()<<endl; }
            if (choice == 2) { cout << "Value: "; cin >> choice; stack.push(choice); }
            if (choice == 3) { stack.pop(); cout << "\nPopped" << endl; }
        }
        if (choice == 2) {//Queue
            cout <<
                "----------[Queue]----------" << endl <<
                "Operations:\n1) Peek\n2) Push\n3) Pop" << endl << '>';
            cin >> choice;
            if (choice == 1) { 
                if (!(q.empty())) { cout << q.front() << endl; }
                else { cout << "Queue Empty!" << endl; }
                 }
            if (choice == 2) { cout << "Value: "; cin >> choice; q.push(choice); }
            if (choice == 3) { q.pop(); cout << "\nPopped" << endl; }
        }
        
    }
}

int init() { 
    cout << "----------[Welcome To Stacks&Queues!]----------"<<endl;
    return 200; }


int main() {
    queue<int> q;
    class Stack stackInstance;
    cli(stackInstance,q);
    cout << "Hello world!";
    return 200;
}