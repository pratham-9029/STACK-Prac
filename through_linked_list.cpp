#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};  

class Stack{
public:
    Node *top;

    Stack()
    {
        this->top = NULL;
    }

    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = this->top;
        this->top = newNode;
        cout << value << " pushed to stack."<<endl;
    }

    void pop()
    {   
        Node *ptr = this->top;
        cout<<"popped element : "<<ptr->data;
        top = top->next;
        delete ptr;
        cout<<endl;
    }

    int peek()
    {
        return top->data;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void display()
    {
        Node *ptr = this->top;
        cout<<"Stack List : ";
        while (ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
        
    }
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main()
{

    Stack obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.display();
    obj.pop();
    obj.display();
    return 0;
}