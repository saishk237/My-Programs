/* Assignment 12 (Group B)
A Dictionary stores keywords & its meaning. Provide facility for
- Adding new keywords,
- Deleting keywords,
- Updating values of any entry.
Provide a facility to Display whole data sorted in ascending/ Descending order.
Also find how many maximum comparisons may require for finding any keyword.
(Use Binary Search Tree for implementation.) */

#include <iostream>
#include<string.h>
using namespace std;

typedef struct node
{
    char k[25];
    char m[25];
    class node  *left;
    class node * right;
}node;

class Dictionary
{
    public:
    node *root;
    void create();
    void display(node *);
    void insert(node * root,node *temp);
    int search(node *,char []);
    int update(node *,char []);
    node* dlt(node *,char []);
    node * min(node *);
};

void Dictionary :: create()
{
    class node *temp;
    char ch;
    do
    {
        temp = new node;
        cout<<"\nEnter Keyword: ";
        cin>>temp->k;
        cout<<"Enter Meaning: ";
        cin>>temp->m;

        temp->left = NULL;
        temp->right = NULL;

        if(root == NULL)
        {
        root = temp;
        }
        else
        {
        insert(root, temp);
        }
        cout<<"\nDo u want to add more (Y/N): ";
        cin>>ch;
    } while(ch == 'Y' || ch=='y');
}

void Dictionary :: insert(node * root,node *temp)
{
    if(strcmp (temp->k, root->k) < 0 )
    {
        if(root->left == NULL)
            root->left = temp;
        else
            insert(root->left,temp);
    }
    else
    {
        if(root->right == NULL)
            root->right = temp;
        else
            insert(root->right,temp);
    }

}

void Dictionary:: display(node * root)
{
    if( root != NULL)
    {
        display(root->left);
        cout<<"\nKeyword :: "<<root->k<<endl<<"Meaning :: "<<root->m<<endl<<endl;
        display(root->right);
    }
}

int Dictionary :: search(node * root,char k[25])
{
    int c=0;
    while(root != NULL)
    {
        c++;
        if(strcmp (k,root->k) == 0)
        {
            return 1;
        }
        if(strcmp (k, root->k) < 0)
            root = root->left;
        if(strcmp (k, root->k) > 0)
            root = root->right;
    }

    return -1;
}

int Dictionary :: update(node * root,char k[25])
{
    while(root != NULL)
    {
        if(strcmp (k,root->k) == 0)
        {
            cout<<"Enter New Meaning: ";
            cin>>root->m;
            return 1;
        }
        if(strcmp (k, root->k) < 0)
            root = root->left;
        if(strcmp (k, root->k) > 0)
            root = root->right;
    }
    return -1;
}

node* Dictionary :: dlt(node * root,char k[25])
{
    node *temp;

    if(root == NULL)
    {
        cout<<"\nKeyword Not Found";
        return root;
    }

    if (strcmp(k,root->k) < 0)
    {
        root->left = dlt(root->left, k);
        return root;
    }
    if (strcmp(k,root->k) > 0)
    {
        root->right = dlt(root->right, k);
        return root;
    }

    if (root->right==NULL&&root->left==NULL)
    {
        temp = root;
        delete temp;
        return NULL;
    }
    if(root->right==NULL)
    {
        temp = root;
        root = root->left;
        delete temp;
        return root;
    }
    else if(root->left==NULL)
    {
        temp = root;
        root = root->right;
        delete temp;
        return root;
    }
    temp = min(root->right);
    strcpy(root->k,temp->k);
    root->right = dlt(root->right, temp->k);
    return root;
}

node *Dictionary :: min(node *q)
{
    while(q->left != NULL)
    {
        q = q->left;
    }
    return q;
}

int main()
{
    int choice;
    Dictionary d;
    d.root = NULL;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup B-Assignment 12 (PBL) :: A Dictionary stores keywords & its meaning. Provide facility\n\t\t\t       - for Adding new keywords,\n\t\t\t       - Deleting keywords,\n\t\t\t       - Updating values of any entry.\n\t\t\t       Provide a facility to Display whole data sorted in ascending/ Descending order.\n\t\t\t       Also find how many maximum comparisons may require for finding any keyword."<<endl;
    while(1)
    {
        cout<<"\n\n    |- Menu -|"<<endl;
        cout<<"1) Add Keywords"<<endl;
        cout<<"2) Display All Words"<<endl;
        cout<<"3) Search a Keyword"<<endl;
        cout<<"4) Update Meaning"<<endl;
        cout<<"5) Delete a Keyword"<<endl;
        cout<<"6) Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                d.create();
                break;
            case 2:
                if(d.root == NULL)
                {
                    cout<<"\nDictionary is Empty!!";
                }
                else
                {
                    d.display(d.root);
                }
                break;
            case 3:
                if(d.root == NULL)
                {
                    cout<<"\nDictionary is Empty!!";
                }
                else
                {
                    cout<<"\nEnter Keyword to search: ";
                    char k[25];
                    cin>>k;

                    if( d.search(d.root,k) == 1)
                    cout<<"\nKeyword Found";
                    else
                    cout<<"\nKeyword Not Found";
                }
                break;
            case 4:
                if(d.root == NULL)
                {
                    cout<<"\nDictionary is Empty!!";
                }
                else
                {
                    cout<<"\nEnter Keyword to update meaning: ";
                    char k[25];
                    cin>>k;
                    if(d.update(d.root,k) == 1)
                        cout<<"\nMeaning Updated";
                    else
                        cout<<"\nMeaning Not Found";
                }
                break;
            case 5:
                if(d.root == NULL)
                {
                    cout<<"\nDictionary is Empty!!";
                }
                else
                {
                    cout<<"\nEnter Keyword to delete: ";
                    char k[25];
                    cin>>k;
                    if(d.root == NULL)
                    {
                        cout<<"\nKeyword Not Found";
                    }
                    else
                    {
                        d.root = d.dlt(d.root,k);
                    }
                }
                break;
            case 6:
                cout<<"\nThank You!"<<endl;
                exit(0);
                break;
            default:
                cout<<"Invalid Input! Please Try Again...";
        }
    }
    return 0;
}