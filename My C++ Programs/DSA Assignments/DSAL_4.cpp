// Write a C++ program to implement the following data structures and its operations using linked list: ii) Queue

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

Node *front = NULL;
Node *rear = NULL;

// Function to check if queue is empty or not
bool isEmpty()
{
    if(front==NULL && rear==NULL)
        return true;
    else
        return false;
}

// Function to insert an element in queue
void enqueue(int val)
{
    Node *ptr = new Node();
    ptr->data = val;
    ptr->link = NULL;

    // If inserting the first element/node
    if(front == NULL)
    {
        front = ptr;
        rear = ptr;
    }
    else
    {
        rear->link = ptr;
        rear = ptr;
    }
}

// Function to delete element from queue
void dequeue()
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
            front = front->link;
            free(ptr);
            cout<<"<<Last element Deleted>>"<<endl;
        }
    }
}

// Function to display the element at front
void peek( )
{
    if( isEmpty())
        cout<<"Queue is empty\n";
    else
        cout<<"Element at the front is:- "<<front->data<<endl;
}

// Function to Display the Queue
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
            ptr= ptr->link;
        }
        cout<<endl;
    }
}

int main()
{
    int choice, i;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nAssignment 4 (DSAL) :: C++ program to implement the following data structures and its operations\n\t\t       using linked list: ii) Queue"<<endl;
    cout<<"\n*** QUEUE IMPLEMENTATION ***\n"<<endl;
    while(1)
    {
        cout<<"   |- MENU -|"<<endl;
        cout<<"1) Enqueue"<<endl;
        cout<<"2) Dequeue"<<endl;
        cout<<"3) Peek"<<endl;
        cout<<"4) Display Queue"<<endl;
        cout<<"5) Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        // Menu-Driven
        switch(choice)
        {
            case 1:
                cout<<"<<Inserting Element in the Front>>"<<endl;
                cout<<"Enter Value: ";
                cin>>i;
                enqueue(i);
                cout<<endl;
                break;
            case 2:
                dequeue();
                cout<<endl;
                break;
            case 3: 
                peek();
                cout<<endl;
                break;
            case 4:
                cout<<"<<Displaying Queue>>"<<endl;
                displayQueue();
                cout<<endl;
                break;
            case 5:
                cout<<"Thank You!"<<endl;
                exit(1);
                break;
            default:
                cout<<"Invalid Input! Please Try Again...\n"<<endl;
        }   
    }
    return 0;
}



/*
// Write a C++ program to implement the following data structures and its operations using linked list: i) Stack

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

Node *top = NULL;

//Function to check if stack is empty or not
bool isEmpty()
{
    if(top == NULL)
        return true;
    else
        return false;
}

// Function to insert an element in stack
void push(int val)
{
    Node *ptr = new Node();
    ptr->data = val;
    ptr->link = top;
    top = ptr;
}

// Function to delete top element from the stack
void pop()
{
    if (isEmpty())
        cout<<"Stack is Empty"<<endl;
    else
    {
        Node *ptr = top;
        top = top -> link;
        delete(ptr);
        cout<<"<<Top element Deleted>>"<<endl;
    }
}

// Function to display the top element of the stack
void peek()
{
    if (isEmpty())
        cout<<"Stack is Empty\n"<<endl;
    else
        cout<<"Element at the top :- "<<top->data<<endl;
}

// Function to Display the Stack
void displayStack()
{
    if (isEmpty())
        cout<<"Stack is Empty\n"<<endl;
    else
    {
        Node *temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->link;
        }
        cout<<endl;
    }
}

int main()
{
    int choice, i;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nAssignment 4 (DSAL) :: C++ program to implement the following data structures and its operations\n\t\t       using linked list: i) Stack."<<endl;
    cout<<"\n*** STACK IMPLEMENTATION ***\n"<<endl;
    while(1)
    {
        cout<<"   |- MENU -|"<<endl;
        cout<<"1) Push"<<endl;
        cout<<"2) Pop"<<endl;
        cout<<"3) Peek"<<endl;
        cout<<"4) Display Stack"<<endl;
        cout<<"5) Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        // Menu-Driven
        switch(choice)
        {
            case 1:
                cout<<"<<Inserting Element at the Top>>"<<endl;
                cout<<"Enter Value: ";
                cin>>i;
                push(i);
                cout<<endl;
                break;
            case 2:
                pop();
                cout<<endl;
                break;
            case 3:
                peek();
                cout<<endl;
                break;
            case 4:
                cout<<"<<Displaying Stack>>"<<endl;
                displayStack();
                break;
            case 5:
                cout<<"Thank You!"<<endl;
                exit(1);
            default:
                cout<<"Invalid Input! Please Try Again...\n"<<endl;
        }
    }
    return 0;
}
*/