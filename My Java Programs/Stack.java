static class Node
{
    int data;
    Node next;

    Node(int data)
    {
        this.data=data;
        next=null;
    }
}
static class Stack
{
    static Node head=null;
    public static boolean isEmpty()
    {
        return head==null;
    }
    public static void push(int n)
    {

    }
    public static void pop()
    {

    }
    public static void top()
    {

    }
    public static void main(String[] args)
    {
        Stack st = new Stack();
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(5);
        st.push(6);
        System.out.println(st.top());
        st.pop();
        System.out.println(st.top());
    }
}
