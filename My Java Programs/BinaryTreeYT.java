public class BinaryTreeYT
{
    static class Node
    {
        int data;
        Node left;
        Node right;

        Node(int data)
        {
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }

    static class BinaryTree
    {
        static int idx=-1;
        public static Node buildTree(int nodes[])
        {
            idx++;
            if(nodes[idx]==-1)
                return null;

            
        }
        public static void main(String[] args)
        {
            int nodes[]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
            BinaryTree tree1 = new BinaryTree();
            Node root = tree1.buildTree(nodes);

        }
    }
}


// public class Node
// {
//     int data;
//     Node left;
//     Node right;

//     Node (int data)
//     {
//         this.data=data;
//         left = null;
//         right = null;
//     }
// }
// public class BinaryTree
// {
//     static int idx=-1;
//     public static Node buildTree(int nodes[])
//     {
//         Node newNode = new Node(nodes[idx]);

        

//     }
//     public static void preorder(Node root)
//     {

//     }

//     public static void inorder(Node root)
//     {

//     }

//     public static void postorder(Node root)
//     {

//     }

//     public static void main(String[] args)
//     {
//         int nodes[]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
//         BinaryTree tree = new BinaryTree();
//         Node root = tree.buildTree(nodes);
//         preorder(root);
//         inorder(root);
//         postorder(root);
//     }
// }
