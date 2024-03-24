// C++ program to construct a binary search tree and perform insertion, deletion, searching of a node and its traversal.

#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int temp;
    Node* left;
    Node* right;
    Node(int t)
    {
        temp = t;
        left = NULL;
        right = NULL;
    }
    
    // Insertion Operation
    Node* insertElement(Node* root, int temp)
    {
        if(root == NULL)
        {
            return new Node(temp);
        }
        else
        {
            Node* curr;
            if(temp <= root->temp)
            {
                curr = insertElement(root->left, temp);
                root->left = curr;
            }
            else
            {
                curr = insertElement(root->right, temp);
                root->right = curr;
            }
            return root;
        }
    }

    // Deletion Operation
    Node* deleteElement(Node* root, int k) 
    { 
        if (root == NULL) 
            return root;

        if(root->temp > k)
        { 
            root->left = deleteElement(root->left, k); 
            return root; 
        } 
        else if(root->temp < k)
        { 
            root->right = deleteElement(root->right, k); 
            return root; 
        } 
  
        if (root->left == NULL)
        { 
            Node* temp = root->right;
            delete root; 
            return temp; 
        } 
        else if (root->right == NULL)
        { 
            Node* temp = root->left; 
            delete root; 
            return temp; 
        }
        else 
        {
            Node* par = root;
            Node *s = root->right; // successor of the node
            while (s->left != NULL)
            { 
                par = s;
                s = s->left; 
            } 

            if (par != root) 
                par->left = s->right; 
            else
                par->right = s->right; 

            root->temp = s->temp; 

            delete s;          
            return root; 
        } 
    } 

    // Search Operation
    bool searchElement(Node* root, int skey)
    {
        if(root == NULL || root->temp == skey)
            return root;

        if(root->temp < skey)
            return searchElement(root->right,skey);

        return searchElement(root->left,skey);
    }

    // Indorder traversal
    void inorderTrav(Node* root)
    {
        if(root == NULL)
            return;
        
        inorderTrav(root->left);
        cout << root->temp << " ";
        inorderTrav(root->right);
    }

    void preorderTrav(Node* root)
    {
        if (root == NULL)
            return;

        cout<<root->temp<<" ";
        preorderTrav(root->left);
        preorderTrav(root->right);
    }

    void postorderTrav(Node* root)
    {
        if (root == NULL)
            return;

        postorderTrav(root->left);
        postorderTrav(root->right);
        cout<<root->temp<<" ";
    }
};

int main()
{
    Node bst(0);
    Node* root = NULL;
    int choice;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nGroup B-Assignment 2 (DSAL) :: C++ program to construct a binary search tree and perform\n\t\t\t       insertion, deletion, searching of a node and its traversal."<<endl;
    cout<<"\n*** Binary Search Tree ***";
    while(1)
    {
        cout<<"\n\n     |- MENU -|"<<endl;
        cout<<"1) Insert Element"<<endl;
        cout<<"2) Delete Element"<<endl;
        cout<<"3) Search Element"<<endl;
        cout<<"4) Inorder Traversal"<<endl;
        cout<<"5) Preorder Traversal"<<endl;
        cout<<"6) Postorder Traversal"<<endl;        
        cout<<"7) Exit"<<endl;        
        cout<<"Enter your Choice: ";
        cin>>choice;
        //Menu-Driven
        switch(choice)
        {
            case 1:
            {
                int i;
                cout<<"\nEnter element to insert: ";
                cin>>i;
                root = bst.insertElement(root,i);
                break;
            }
            case 2:
            {
                int i;
                cout<<"\nEnter element to delete: ";
                cin>>i;
                Node* dlt = bst.deleteElement(root,i);
                break;
            }
            case 3:
            {
                int i;
                cout<<"\nEnter element to search: ";
                cin>>i;
                if (bst.searchElement(root,i) == true)
                cout<<"Element "<<i<<" - Found in the tree"<<endl;
                else
                cout<<"Element "<<i<<" - Not found in the tree"<<endl;
                break;
            }
            case 4:
            {
                cout<<"\nInorder Traversal Sequence: "<<endl;                
                bst.inorderTrav(root);
                break;
            }
            case 5:
            {
                cout<<"\nPreorder Traversal Sequence: "<<endl;                
                bst.preorderTrav(root);
                break;
            }
            case 6:
            {
                cout<<"\nPostorder Traversal Sequence: "<<endl;                
                bst.postorderTrav(root);
                break;
            }
            case 7:
            {
                cout<<"\nThank You!"<<endl;
                exit(1);
            }
            default:
                cout<<"\nInvalid input! Please Try Again..."<<endl;
        }
    }
    return 0;
}

