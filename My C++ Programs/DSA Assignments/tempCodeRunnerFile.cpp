/*
Roll No.: SYCOC365
Name: Saish Kothawade
Topic: Queue using linked list
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *nextptr;
};

Node *front = NULL;
Node *rear = NULL;

bool isEmpty()
{
    if(front==NULL && rear==NULL)
        return true;
    else
        return false;
}

// Enqueue Operation
void insertElement(int x)
{
    Node *ptr = new Node();
    ptr->data = x;
    ptr->nextptr = NULL;

    if(front == NULL)
    {
        front = ptr;
        rear = ptr;
    }
    else
    {
        rear->nextptr = ptr;
        rear = ptr;
    }
}

// Dequeue Operation
void deleteElement()
{
    if(isEmpty())
        cout<<"Queue is empty\n";
    else
    {
        if(front == rear)
        {
            free(front);
            front = rear = NULL;
        }
        else
        {
            Node *ptr = front;
            front = front->nextptr;
            free(ptr);
            cout<<"Last element Deleted"<<endl;
        }
    }
}

// Displays Frontmost node value
void peek()
{
    if(isEmpty())
        cout<<"Queue is empty\n";
    else
        cout<<"Front element is: "<<front->data<<endl;
}

void displayQueue()
{
    if(isEmpty())
        cout<<"Queue is empty\n"<<endl;
    else
    {
        Node *ptr = front;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr= ptr->nextptr;
        }
        cout<<endl;
    }
}

int main()
{
    int choice, i;
    cout<<"\n*** Queue Implementation using Linked List ***\n"<<endl;
    while(1)
    {
        cout<<"MENU"<<endl;
        cout<<"1) Insert Element"<<endl;
        cout<<"2) Delete Element"<<endl;
        cout<<"3) Peek"<<endl;
        cout<<"4) Display"<<endl;
        cout<<"5) Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;

        switch(choice)
        {
            case 1:
                cout<<"Inserting Element at the Rear End"<<endl;
                cout<<"Enter Value: ";
                cin>>i;
                insertElement(i);
                cout<<endl;
                break;
            case 2:
                deleteElement();
                cout<<endl;
                break;
            case 3: 
                peek();
                cout<<endl;
                break;
            case 4:
                cout<<"Displaying Queue"<<endl;
                displayQueue();
                cout<<endl;
                break;
            case 5:
                cout<<endl;
                exit(1);
                break;
            default:
                cout<<"Invalid Input!"<<endl;
        }   
    }
    return 0;
}