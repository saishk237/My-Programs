public class QueueY {
    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            next = null;
        }
    }

    static class Queue {
        static Node head = null;
        static Node tail = null;

        public boolean isEmpty() {
            return head == null && tail == null;
        }

        public void add(int a) {
            Node newNode = new Node(a);
            if (isEmpty()) {
                tail = head = newNode;
                return;
            }
            tail.next = newNode;
            tail = newNode;
        }

        public int remove() {
            if (isEmpty())
                return -1;

            int front = head.data;

            if (head == tail)
                tail = null;

            head = head.next;
            return front;
        }

        public int peek() {
            if (isEmpty())
                return -1;

            return head.data;
        }
    }

    public static void main(String[] args) {
        Queue q1 = new Queue();
        q1.add(1);
        q1.add(2);
        q1.add(3);
        q1.add(4);
        q1.add(5);
        System.out.println(q1.remove());
        q1.add(6);
        System.out.println(q1.remove());
        q1.add(7);

        while (!q1.isEmpty()) {
            System.out.println(q1.peek());
            q1.remove();
        }
    }
}