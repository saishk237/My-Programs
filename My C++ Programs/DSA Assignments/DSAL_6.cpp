// C++ program to perform the following operations on a height balanced tree: i) Insert a node ii) Search a node iii) Display it in ascending order.

#include <bits/stdc++.h> 
using namespace std;
 
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}*root;
 
class AVLTree
{
    public:
        int height(Node *);
        int difference(Node *);
        Node *rr_rotation(Node *);
        Node *ll_rotation(Node *);
        Node *lr_rotation(Node *);
        Node *rl_rotation(Node *);
        Node* balanceTree(Node *);
        Node* insertElement(Node *, int );
        void displayTree(Node *, int);
        void inorderTrav(Node *);
        AVLTree()
        {
            root = NULL;
        }
};
 
// Height of AVL Tree
int AVLTree::height(Node *tmp)
{
    int ht = 0;
    if (tmp != NULL)
    {
        int l_ht = height(tmp->left);
        int r_ht = height(tmp->right);
        int maxHeight = max (l_ht, r_ht);
        ht = maxHeight + 1;
    }
    return ht;
}
 
// Height Difference
int AVLTree::difference(Node *tmp)
{
    int l_ht = height (tmp->left);
    int r_ht = height (tmp->right);
    int b_factor= l_ht - r_ht;
    return b_factor;
}

// Rotations:

Node *AVLTree::rr_rotation(Node *par)
{
    Node *tmp;
    tmp = par->right;
    par->right = tmp->left;
    tmp->left = par;
    return tmp;
}

Node *AVLTree::ll_rotation(Node *par)
{
    Node *tmp;
    tmp = par->left;
    par->left = tmp->right;
    tmp->right = par;
    return tmp;
}
 
Node *AVLTree::lr_rotation(Node *par)
{
    Node *tmp;
    tmp = par->left;
    par->left = rr_rotation (tmp);
    return ll_rotation (par);
}
 
Node *AVLTree::rl_rotation(Node *par)
{
    Node *tmp;
    tmp = par->right;
    par->right = ll_rotation (tmp);
    return rr_rotation (par);
}
 

// Balancing the AVL Tree
Node *AVLTree::balanceTree(Node *tmp)
{
    int balanceFactor = difference (tmp);
    if (balanceFactor > 1)
    {
        if (difference (tmp->left) > 0)
            tmp = ll_rotation (tmp);
        else
            tmp = lr_rotation (tmp);
    }
    else if (balanceFactor < -1)
    {
        if (difference (tmp->right) > 0)
            tmp = rl_rotation (tmp);
        else
            tmp = rr_rotation (tmp);
    }
    return tmp;
}
 

// Function to insert element into the tree
Node *AVLTree::insertElement(Node *root, int val)
{
    if (root == NULL)
    {
        root = new Node;
        root->data = val;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else if (val < root->data)
    {
        root->left = insertElement(root->left, val);
        root = balanceTree(root);
    }
    else if (val >= root->data)
    {
        root->right = insertElement(root->right, val);
        root = balanceTree(root);
    }
    return root;
}

// Function to display AVL Tree
void AVLTree::displayTree(Node *ptr, int level)
{
    int i;
    if (ptr!=NULL)
    {
        displayTree(ptr->right, level + 1);
        printf("\n");
        if (ptr == root)
        cout<<"Root -> ";
        for (i=0; i<level && ptr!=root; i++)
            cout<<"        ";
        cout<<ptr->data;
        displayTree(ptr->left, level + 1);
    }
}
 
// Inorder Traversal of AVL Tree
void AVLTree::inorderTrav(Node *tree)
{
    if (tree == NULL)
        return;
    inorderTrav(tree->left);
    cout<<tree->data<<"  ";
    inorderTrav(tree->right);
}

int main()
{
    int choice, i;
    AVLTree avl1;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nAssignment 6 (DSAL) :: C++ program to perform the following operations on a height balanced tree:\n\t\t       i) Insert a node ii) Search a node iii) Display it in ascending order."<<endl;
    cout<<"\n*** Balanced AVL Tree ***"<<endl;
    while(1)
    {
        cout<<"\n     |- MENU -|"<<endl;
        cout<<"1) Insert Element"<<endl;
        cout<<"2) Display Balanced AVL Tree"<<endl;
        cout<<"3) Inorder traversal"<<endl;
        cout<<"4) Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        // Menu-Driven
        switch(choice)
        {
            case 1:
                cout<<"\nEnter element to insert: ";
                cin>>i;
                root = avl1.insertElement(root, i);
                break;

            case 2:
                if (root == NULL)
                {
                    cout<<"\nTree is Empty"<<endl;
                    continue;
                }
                cout<<"\nBalanced AVL Tree:"<<endl;
                avl1.displayTree(root, 1);
                break;

            case 3:
                cout<<"\nInorder Traversal Sequence:"<<endl;
                avl1.inorderTrav(root);
                cout<<endl;
                break;

            case 4:
                cout<<"\nThank You!"<<endl;
                exit(1);    
                break;

            default:
                cout<<"\nInvalid Input! Please Try Again..."<<endl;
        }
    }
    return 0;
}