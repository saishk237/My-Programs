/*import java.util.*;
public class LL
{
    private int size;
    Node head;
    LL(){
        this.size=0;
    }
    public class Node
    {
        int data;
        Node next;

        Node(int d)
        {
            data=d;
            next=null;
            size++;
        }
    }

    public void insertAtStart(int d1)
    {
        Node newNode = new Node(d1);
        if(head==null)
        {
            head=newNode;
            return;
        }
        newNode.next=head;
        head=newNode;

    }

    // public void insertAtMiddle(int d3, int pos)
    // {
    //     Node newNode = new Node(d3);
    //     if(head==null)
    //     {
    //         head=newNode;
    //         return;
    //     }
    //     Node curr =  head;
    //     int temp=0;
    //     while(temp<pos)
    //     {
    //         curr=curr.next;
    //     }
    //     curr.next=newNode;
    //     newNode.next=

    // }
    
    public void insertAtEnd(int d2)
    {
        Node newNode = new Node(d2);
        if(head==null)
        {
            head=newNode;
            return;
        }
        Node curr = head;
        while(curr.next!=null)
        {
            curr=curr.next;
        }
        curr.next=newNode;
    }

    public void deleteFromStart()
    {
        if(head==null)
        {
            System.out.println("The list is empty");
            return;
        }
        size--;
        head = head.next;
    }

    public void deleteFromMiddle()
    {


    }

    public void deleteFromEnd()
    {
        if(head==null)
        {
            System.out.println("The list is empty");
            return;
        }
        size--;
        if(head.next==null)
        {
            head=null;
            return;
        }

        Node secondLast=head;
        Node lastNode=head.next;
        while(lastNode.next!=null)
        {
            lastNode=lastNode.next;
            secondLast=secondLast.next;
        }
        secondLast.next=null;
    }

    public int getSize()
    {
        return size;
    }

    public void printList()
    {
        if(head==null)
        {
            System.out.println("List is empty");
            return;
        }
        Node curr=head;
        while(curr!=null)
        {
            System.out.print(curr.data+" -> ");
            curr=curr.next;
        }
        System.out.println("NULL");
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        LL list1 = new LL();
        list1.printList();
        list1.insertAtStart(10);
        list1.insertAtStart(9);
        list1.printList();
        list1.insertAtEnd(5);
        list1.insertAtEnd(7);
        list1.printList();
        list1.deleteFromStart();
        list1.printList();
        list1.insertAtStart(2);
        list1.deleteFromEnd();
        list1.printList();
        System.out.println(list1.getSize());
        list1.insertAtStart(1);
        list1.printList();
        System.out.println(list1.getSize());
    }
}
*/

/*
import java.util.LinkedList;
public class LL
{
    public static void main(String[] args) {
        LinkedList<Integer>  list1 = new LinkedList<Integer>();
        list1.addFirst(1);
        list1.addFirst(2);
        System.out.println(list1);

        list1.addLast(3);
        list1.addLast(4);
        System.out.println(list1);
        System.out.println(list1.size());

        for(int i=0; i<list1.size(); i++)
        {
            System.out.print(list1.get(i)+" -> ");
        }
        System.out.println("NULL");

        list1.removeFirst();
        System.out.println(list1);
        list1.removeLast();
        System.out.println(list1);
        list1.addFirst(5);
        list1.addFirst(6);
        System.out.println(list1);
        list1.remove(2);
        System.out.println(list1);
    }
}
*/

import java.util.*;
public class LL
{
    Node head;
    public class Node
    {
        int data;
        Node next;

        Node(int data)
        {
            this.data=data;
            next=null;
        }
    }

    public void insertAtEnd(int d1)
    {
        Node newNode = new Node(d1);
        if(head==null)
        {
            head=newNode;
            return;
        }
        Node curr=head;
        while(curr.next!=null)
        {
            curr=curr.next;
        }
        curr.next=newNode;
    }

    public void printList()
    {
        if(head==null)
        {
            System.out.println("The List is Empty");
            return;
        }
        Node curr=head;
        while(curr!=null)
        {
            System.out.print(curr.data+" -> ");
            curr=curr.next;
        }
        System.out.println("NULL");
    }

    public int searchElement(int n)
    {
        if(head==null)
        {
            return -1;
        }
        Node curr=head;
        int index=-1;
        for(int i=0; curr.next!=null; i++)
        {
            if(curr.data==n)
            {
                index=i;
                break;
            }
            curr=curr.next;
        }
        return index; 
    }
    public static void main(String[] args)
    {
        LL list1 = new LL();
        list1.printList();
        System.out.println(list1.searchElement(7));
        list1.insertAtEnd(1);
        list1.insertAtEnd(5);
        list1.insertAtEnd(7);
        list1.insertAtEnd(3);
        list1.insertAtEnd(8);
        list1.insertAtEnd(2);
        list1.insertAtEnd(3);
        list1.printList();
        System.out.println(list1.searchElement(7));
    }
}
