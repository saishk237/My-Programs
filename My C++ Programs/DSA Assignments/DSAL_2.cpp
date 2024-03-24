/* Write a C++ program to implement a singly link list and perform operations such as insert,
delete, display, search element from it and reverse the list. */

#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct node
{
    int info;
    struct node *next;
}*start;
 
class singlyLinkedList
{
    public:
        node* createNode(int);
        void insert_begin();
        void insert_posn();
        void insert_last(); 
        void delete_posn();
        void displayList();
        void searchElement();
        void reverseList();
        singlyLinkedList() 
        {
            start = NULL;
        }
};
 
int main()
{
    int choice, element, position, i;
    singlyLinkedList sl;
    start = NULL;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nAssignment 2 (DSAL) :: C++ program to implement a singly link list and perform operations \n\t\t       such as insert, delete, display, search element from it and reverse the list."<<endl;
    cout<<"\n*** OPERATIONS ON SINGLY LINKED LIST ***"<<endl;
    while (1)
    {
        cout<<"\n\t  |- MENU -|"<<endl;
        cout<<"1) Insert Element in the beginning"<<endl;
        cout<<"2) Insert Element at last"<<endl;
        cout<<"3) Insert Element at particular position"<<endl;
        cout<<"4) Delete a Particular Element"<<endl;
        cout<<"5) Display Linked List"<<endl;
        cout<<"6) Search Element"<<endl;
        cout<<"7) Reverse Linked List"<<endl;
        cout<<"8) Exit"<<endl;

        cout<<"\nEnter your choice: ";
        cin>>choice;
        // Menu-Driven
        switch(choice)
        {
            case 1:
                cout<<"\n<<Inserting Element at Beginning>>"<<endl;
                sl.insert_begin();
                cout<<endl;
                break;
            case 2:
                cout<<"\n<<Inserting Element at Last>>"<<endl;
                sl.insert_last();
                cout<<endl;
                break;
            case 3:
                cout<<"\n<<Inserting Element at given position>>"<<endl;
                sl.insert_posn();
                cout<<endl;
                break;
            case 4:
                cout<<"\n<<Deleting given element>>"<<endl;
                sl.delete_posn();
                break;
            case 5:
                cout<<"\n<<Displaying elements of Linked List>>"<<endl;
                sl.displayList();
                cout<<endl;
                break;
            case 6:
                cout<<"\n<<Searching element in Linked List>>"<<endl;
                sl.searchElement();
                cout<<endl;
                break;
            case 7:
                cout<<"\n<<Reversing elements of Linked List>>"<<endl;
                sl.reverseList();
                cout<<endl;
                break;
            case 8:
                cout<<"\nThank You!"<<endl;
                exit(1);
                break;  
            default:
                cout<<"\nInvalid Input! Please Try Again..."<<endl;
        }
    }
}
 
// Creating Node
node *singlyLinkedList::createNode(int val)
{
    struct node *tmp, *s;
    tmp = new(struct node); 
    if (tmp == NULL)
    {
        cout<<"Memory not allocated "<<endl;
        return 0;
    }
    else
    {
        tmp->info = val;
        tmp->next = NULL;     
        return tmp;
    }
}

// Function to insert element in the beginning
void singlyLinkedList::insert_begin()
{
    int val;
    cout<<"Enter the value to be inserted: ";
    cin>>val;
    struct node *tmp, *p;
    tmp = createNode(val);
    if (start == NULL)
    {
        start = tmp;
        start->next = NULL;          
    } 
    else
    {
        p = start;
        start = tmp;
        start->next = p;
    }
}
 
// Function to insert node at last
void singlyLinkedList::insert_last()
{
    int val;
    cout<<"Enter the value to be inserted: ";
    cin>>val;
    struct node *tmp, *s;
    tmp = createNode(val);
    s = start;
    while (s->next != NULL)
    {         
        s = s->next;        
    }
    tmp->next = NULL;
    s->next = tmp;
}
 
// Function to insert node at a given position
void singlyLinkedList::insert_posn()
{
    int val, posn, flag = 0; 
    cout<<"Enter the value to be inserted: ";
    cin>>val;
    struct node *tmp, *s, *ptr;
    tmp = createNode(val);
    cout<<"Enter the position at which node to be inserted: ";
    cin>>posn;
    int i;
    s = start;
    while (s != NULL)
    {
        s = s->next;
        flag++;
    }
    if (posn == 1)
    {
        if (start == NULL)
        {
            start = tmp;
            start->next = NULL;
        }
        else
        {
            ptr = start;
            start = tmp;
            start->next = ptr;
        }
    }
    else if (posn>1  && posn<=flag)
    {
        s = start;
        for (i=1; i<posn; i++)
        {
            ptr=s;
            s=s->next;
        }
        ptr->next = tmp;
        tmp->next = s;
    }
    else
    {
        cout<<"Positon - Out of range"<<endl;
    }
}

// Function to delete element at a given position
void singlyLinkedList::delete_posn()
{
    int posn, i, flag = 0;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the position of element to be deleted: ";
    cin>>posn;
    struct node *s, *ptr;
    s = start;
    if (posn == 1)
    {
        start = s->next;
    }
    else
    {
        while (s != NULL)
        {
            s = s->next;
            flag++;  
        }
        if (posn > 0 && posn <= flag)
        {
            s = start;
            for (i = 1;i < posn;i++)
            {
                ptr = s;
                s = s->next;
            }
            ptr->next = s->next;
        }
        else
        {
            cout<<"Position - Out of range"<<endl;
        }
        free(s);
    }
}

// Function to search particular element in the Linked List
void singlyLinkedList::searchElement()
{
    int val, posn = 0;
    bool flag = false;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the value to be searched: ";
    cin>>val;
    struct node *s;
    s = start;
    while (s != NULL)
    {
        posn++;
        if (s->info == val)
        {
            flag = true;
            cout<<"Element "<<val<<" - found at position "<<posn<<endl;
        }
        s = s->next;
    }
    if (!flag)
        cout<<"Element "<<val<<" - Not found in the list"<<endl;  
}
 
// Function to reverse the Linked List
void singlyLinkedList::reverseList()
{
    struct node *ptr1, *ptr2, *ptr3;
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
    ptr3 = ptr2->next;
    ptr1->next = NULL;
    ptr2->next = ptr1;
    while (ptr3 != NULL)
    {
        ptr1 = ptr2;
        ptr2 = ptr3;
        ptr3 = ptr3->next;
        ptr2->next = ptr1;         
    }
    start = ptr2;
    displayList();
}
 
// Function to display elements of the Linked List
void singlyLinkedList::displayList()
{
    struct node *tmp;
    if (start == NULL)
    {
        cout<<"List is Empty"<<endl;
        return;
    }
    tmp = start;
    cout<<"\n";
    while (tmp != NULL)
    {
        cout<<tmp->info<<"->";
        tmp = tmp->next;
    }
    cout<<"NULL"<<endl;
}