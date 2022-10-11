public class LinkedList {
    Node Head; // Main Node

    // Class for Node
    static class Node {
        int data;
        Node next;

        Node(int val) {
            this.data = val;
            this.next = null;
        }
    }

    public boolean isEmpty() {
        return Head == null;
    }

    void add(int val) {
        Node newNode = new Node(val);
        if (Head == null)
            Head = newNode;
        else {
            Node temp = Head;
            while (temp.next != null)
                temp = temp.next;
            temp.next = newNode;
        }
    }

    void display() {
        if (Head == null)
            System.out.println("List is Empty.");
        else {
            System.out.println("\n\nList: ");
            Node temp = Head;
            while (temp != null) {
                System.out.print(temp.data + "  ");
                temp = temp.next;
            }
        }
    }

    void sort() {
        Node temp = Head;
        try {
            while (temp != null) {

                Node start = temp;
                while (start != null) {
                    if (start.data < temp.data) {
                        int t = start.data;
                        start.data = temp.data;
                        temp.data = t;
                    }
                    start = start.next;
                }
                temp = temp.next;
            }
        } catch (Exception ex) {
        }
    }

    void removeDuplicateNode() {
        Node temp = Head;
        sort();
        try{
            while (temp != null) {
                if (temp.data == temp.next.data)
                    temp.next = temp.next.next;
                else
                    temp = temp.next;
            }
        }catch(Exception ex){}
    }

    void insertPos(int data, int pos) {
        Node newnode = new Node(data);
        Node temp = Head;

        if (Head == null)
            Head = newnode;
        else if (Head.next == null && pos == 2)
            Head.next = newnode;
        else {
            while (pos-- > 2)
                temp = temp.next;
            Node t = temp.next;
            temp.next = newnode;
            newnode.next = t;
        }
    }

    void reverse() {
        Node prev = null;
        Node current = Head;
        Node next = null;

        while (current != null) {
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }
        Head = prev;
    }

    public static void main(String[] args) {
        LinkedList list1 = new LinkedList();

        list1.add(10);
        list1.add(30);
        list1.add(50);
        list1.add(60);
        list1.add(100);

        list1.display();
    }
}
