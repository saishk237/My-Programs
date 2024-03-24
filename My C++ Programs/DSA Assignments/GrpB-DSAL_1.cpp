// C++ program to implement a doubly linked list and perform operations such as insert, delete, display and search element from it.

#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct node
{
    int info;
    struct node *next;
    struct node *prev;
}*start;
 
class doublyLinkedList
{
    public:
        void createList(int val);
        void insert_begin(int val);
        void insert_last(int val);
        void insert_posn(int val, int position);
        void deleteElement(int val);
        void searchElement(int val);
        void displayList();
        void reverseList();
        doublyLinkedList()
        {
            start = NULL;  
        }
};
 
int main()
{
    int choice, i, posn;
    doublyLinkedList dl;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup B-Assignment 1 (DSAL) :: C++ program to implement a doubly linked list and perform operations such as\n\t\t\t       insert, delete, display and search element from it."<<endl;
    cout<<"\n*** OPERATIONS ON DOUBLY LINKED LIST ***"<<endl;
    while (1)
    {
        cout<<"\n\t   |- MENU -|"<<endl;
        cout<<"1) Create Node"<<endl;
        cout<<"2) Insert Element at the beginning"<<endl;
        cout<<"3) Insert Element after particular position"<<endl;
        cout<<"4) Delete a particular element"<<endl;
        cout<<"5) Display Doubly Linked List"<<endl;
        cout<<"6) Search Element"<<endl;
        cout<<"7) Reverse the List"<<endl;
        cout<<"8) Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;
        // Menu-Driven
        switch(choice)
        {
            case 1:
                cout<<"\nEnter Node Value: ";
                cin>>i;
                dl.createList(i);
                cout<<endl;
                break;
            case 2:
                cout<<"\n<<Inserting Element at Beginning>>"<<endl;         
                cout<<"Enter the value to be inserted: ";
                cin>>i;
                dl.insert_begin(i);
                cout<<endl;
                break;
            case 3:
                cout<<"\n<<Inserting Element at given position>>"<<endl;
                cout<<"Enter the value to be inserted: ";
                cin>>i;
                cout<<"Enter the position after which node to be inserted: ";
                cin>>posn;
                dl.insert_posn(i, posn);
                cout<<endl;
                break;
            case 4:
                cout<<"\n<<Deleting given element>>"<<endl;
                if (start == NULL)
                {                      
                    cout<<"List is Empty"<<endl;   
                    break;
                }
                cout<<"Enter the element to be deleted: ";
                cin>>i;
                dl.deleteElement(i);
                cout<<endl;
                break;
            case 5:
                cout<<"\n<<Displaying elements of List>>"<<endl;
                dl.displayList();
                cout<<endl;
                break;
            case 6:
                cout<<"\n<<Searching given element in the List>>"<<endl;
                cout<<"Enter the value to be searched: ";
                cin>>i;
                dl.searchElement(i);
                cout<<endl;
                break;    
            case 7:
                cout<<"\n<<Reversing the List>>"<<endl;
                if (start == NULL)
                {
                    cout<<"List is Empty"<<endl;
                    break;
                }
                dl.reverseList();
                cout<<endl;
                break;
            case 8:
                cout<<"Thank You!"<<endl;;
                exit(1);
                break;
            default:
                cout<<"Invalid Input! Please Try Again...\n"<<endl;
        }
    }
    return 0;
}
 
// Function to create Doubly Linked List
void doublyLinkedList::createList(int val)
{
    struct node *s, *temp;
    temp = new(struct node); 
    temp->info = val;
    temp->next = NULL;
    if (start == NULL)
    {
        temp->prev = NULL;
        start = temp;
    }
    else
    {
        s = start;
        while (s->next != NULL)
            s = s->next;
        s->next = temp;
        temp->prev = s;
    }
    cout<<"Doubly Linked List Created!!"<<endl;
}
 
// Function to insert element at the beginning
void doublyLinkedList::insert_begin(int val)
{
    if (start == NULL)
    {
        cout<<"Error! List doesn't exist"<<endl;
        return;
    }
    struct node *temp;
    temp = new(struct node);
    temp->prev = NULL;
    temp->info = val;
    temp->next = start;
    start->prev = temp;
    start = temp;
}

// Function to insert element at given position
void doublyLinkedList::insert_posn(int val, int pos)
{
    if (start == NULL)
    {
        cout<<"Error! List doesn't exist"<<endl;
        return;
    }
    struct node *temp, *q;
    int i;
    q = start;
    for (i=0; i<pos-1; i++)
    {
        q = q->next;
        if (q == NULL)
        {
            cout<<"Positon - Out of range"<<endl;
            return;
        }
    }
    temp = new(struct node);
    temp->info = val;
    if (q->next == NULL)
    {
        q->next = temp;
        temp->next = NULL;
        temp->prev = q;      
    }
    else
    {
        temp->next = q->next;
        temp->next->prev = temp;
        q->next = temp;
        temp->prev = q;
    }
}
 
// Function to delete given element
void doublyLinkedList::deleteElement(int val)
{
    struct node *tmp, *q;
    if (start->info == val)
    {
        tmp = start;
        start = start->next;  
        start->prev = NULL;
        free(tmp);
        return;
    }
    q = start;
    while (q->next->next != NULL)
    {   
        if (q->next->info == val)  
        {
            tmp = q->next;
            q->next = tmp->next;
            tmp->next->prev = q;
            free(tmp);
            return;
        }
        q = q->next;
    }
    if (q->next->info == val)    
    { 	
        tmp = q->next;
        free(tmp);
        q->next = NULL;
        return;
    }
    cout<<"Element "<<val<<" - Not found in the list"<<endl;
}

// Function to search given element in the List
void doublyLinkedList::searchElement(int val)
{       
    struct node *temp;
    temp=start;
    int flag = 0;
    int posn = 0;

    if(temp != NULL)
    {
        while(temp != NULL)
        {
            posn++;
            if(temp->info == val)
            {
                flag++;
                break;
            }
            temp = temp->next;
        }
        if (flag == 1)
        {
            cout<<"Element "<<val<<" - found at position "<<posn<<endl;
        }
        else
        {
            cout<<"Element "<<val<<" - Not found in the list"<<endl;
        }
    }
    else
    {
        cout<<"List is Empty";
    }
} 

// Function to display elements of Doubly Linked List
void doublyLinkedList::displayList()
{
    struct node *q;
    if (start == NULL)
    {
        cout<<"List is Empty"<<endl;
        return;
    }
    q = start;
    while (q != NULL)
    {
        cout<<q->info<<" <-> ";
        q = q->next;
    }
    cout<<"NULL"<<endl;
}

// Function to reverse the List
void doublyLinkedList::reverseList()
{
    struct node *ptr1, *ptr2;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    if (start->next == NULL)
    {
        return;
    }
    ptr1 = start;
    ptr2 = ptr1->next;
    ptr1->next = NULL;
    ptr1->prev = ptr2;
    while (ptr2 != NULL)
    {
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev; 
    }
    start = ptr1;
    displayList();
}

