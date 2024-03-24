// Write a C++ program to implement a threaded binary tree and its traversal.

#include <iostream>
#include <cstdlib>
#define MAXVAL 65536

using namespace std;

class Node
{
    public:
    int k;
    Node *l, *r;
    bool leftThread, rightThread;
};

class ThreadedBinaryTree
{
    private:
    Node *root;
    
    public:
    ThreadedBinaryTree() //constructor
    {   
        root= new Node();
        root->r= root->l= root;
        root->leftThread = true;
        root->k = MAXVAL;
    }

    // Function to delete all elements of the Tree
    void clearTree()
    {   
        root= new Node();
        root->r = root->l = root;
        root->leftThread = true;
        root->k = MAXVAL;
    }

    // Function to insert an element in the Tree
    void insertElement(int ikey)
    {
        Node *p = root;
        for(;;)
        {
            if (p->k< ikey)
            { 
                if (p->rightThread)
                break;
                p = p->r;
            }
            else if (p->k > ikey)
            { 
                if (p->leftThread)
                break;
                p = p->l;
            }
            else
                return;
        }
        Node *temp = new Node();
        temp->k = ikey;
        temp->rightThread= temp->leftThread= true;
        if (p->k < ikey)
        {
            temp->r = p->r;
            temp->l= p;
            p->r = temp;
            p->rightThread= false;
        }
        else
        {
            temp->r = p;
            temp->l = p->l;
            p->l = temp;
            p->leftThread = false;
        }
    }

    // Function to search given element in the Tree
    bool searchElement(int skey)
    {
        Node *temp = root->l;
        while(1)
        {
            if (temp->k < skey)
            {   
                if (temp->rightThread)
                    return false;
                temp = temp->r;
            }
            else if (temp->k > skey)
            {  
                if (temp->leftThread)
                    return false;
                temp = temp->l;
            }
            else
                return true;
        }
    }

    // Function to delete given element from Tree
    void deleteElement(int dkey)
    {
        Node *dest = root->l, *p = root;
        while(1)
        {  
            if (dest->k < dkey)
            {
                if (dest->rightThread)
                    return;
                p = dest;
                dest = dest->r;
            }
            else if (dest->k > dkey)
            {
                if (dest->leftThread)
                    return;
                p = dest;
                dest = dest->l;
            }
            else
            {
                break;
            }
        }
        Node *target = dest;
        if (!dest->rightThread && !dest->leftThread)
        {
            p = dest;
            target = dest->l;
            while (!target->rightThread)
            {
                p = target;
                target = target->r;
            }
            dest->k= target->k; 
        }
        if (p->k >= target->k)
        {
            if (target->rightThread && target->leftThread)
            {
                p->l = target->l;
                p->leftThread = true;
            }
            else if (target->rightThread)
            {
                Node*largest = target->l;
                while (!largest->rightThread)
                {
                    largest = largest->r;
                }
                largest->r = p;
                p->l= target->l;
            }
            else
            {
                Node *smallest = target->r;
                while (!smallest->leftThread)
                {
                    smallest = smallest->l;
                }
                smallest->l = target->l;
                p->l = target->r;
            }
        }
        else
        {   
            if (target->rightThread && target->leftThread)
            {
                p->r= target->r;
                p->rightThread = true;
            }
            else if (target->rightThread)
            { 
                Node *largest = target->l;
                while (!largest->rightThread)
                {
                    largest = largest->r;
                }
                largest->r= target->r;
                p->r = target->l;
            }
            else
            {
                Node *smallest = target->r;
                while (!smallest->leftThread)
                {
                    smallest = smallest->l;
                }
                smallest->l= p;
                p->r= target->r;
            }
        }
    }

    // Function to display elements of the Tree
    void printTree()
    {
        Node *temp = root, *p;
        while(1)
        {
            p=temp;
            temp=temp->r;
            if(!p->rightThread)
            {
                while(!temp->leftThread)
                {
                    temp=temp->l;
                }
            }
            if(temp==root)
                break;
            cout<<temp->k<<" ";
        }
        cout<<endl;
    }

    // Function to display the Inorder Traversal Sequence
    void inorderTrav()
    {
        Node *temp = root, *p;
        while(1)
        {
            p = temp;
            temp = temp->r;
            if (!p->rightThread)
            {
                while (!temp->leftThread)
                {
                    temp = temp->l;
                }
            }
            if (temp == root)
                break;
            
            cout<<temp->k<<" ";
        }
        cout<<endl;
    }
};

// Main Function
int main()
{
    ThreadedBinaryTree tbt1;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nAssignment 5 (DSAL) :: C++ program to implement a threaded binary tree and its traversal."<<endl;
    cout<<"\n*** Threaded Binary Tree ***\n";
    char ch;
    int choice, i;  
    while(1)
    {
        cout<<"\n     |- Menu -|"<<endl;
        cout<<"1) Insert "<<endl;
        cout<<"2) Delete"<<endl;
        cout<<"3) Clear"<<endl;
        cout<<"4) Search"<<endl;
        cout<<"5) Display"<<endl;
        cout<<"6) Inorder Traversal"<<endl;
        cout<<"7) Exit"<<endl;
        cout<<"\nEnter your choice: ";
        cin>>choice;
        //Menu-Driven
        switch(choice)
        {
            case 1 :
                cout<<"\nEnter element to insert: ";
                cin>>i;
                tbt1.insertElement(i);
                break;
            case 2 :
                cout<<"\nEnter element to delete: ";
                cin>>i;
                tbt1.deleteElement(i);
                break;
            case 3 :
                cout<<"\nTree Cleared"<<endl;
                tbt1.clearTree();
                break;
            case 4 :
                cout<<"\nEnter element to search: ";
                cin>>i;
                if (tbt1.searchElement(i) == true)
                cout<<"Element "<<i<<" - Found in the tree"<<endl;
                else
                cout<<"Element "<<i<<" - Not found in the tree"<<endl;
                break;
            case 5:
                cout<<"\nDisplaying Tree:"<<endl;
                tbt1.printTree();
                break;
            case 6:
                cout<<"\nInorder Traversal Sequence: "<<endl;
                tbt1.inorderTrav();
                break;
            case 7:
                cout<<"\nThank You!"<<endl;
                exit(1);
            default:
                cout<<"\nInvalid input! Please Try Again..."<<endl;
        }
    }
    return 0;
}