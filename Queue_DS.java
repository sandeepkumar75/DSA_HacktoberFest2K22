import java.util.Scanner;
import java.io.IOException;

class Queue {
    Node front;
    Node rear;

    Queue() {
        front = rear = null;
    }

    static class Node {
        int data;
        Node next;

        Node(int val) {
            this.data = val;
            this.next = null;
        }
    }

    public boolean isEmpty(){
        return front == null;
    }
    public void enQueue(int val) {
        Node newNode = new Node(val);
        if (rear == null) {
            front = rear = newNode;
        } else {
            Node temp = rear;
            temp.next = newNode;
            rear = temp.next;
        }
        System.out.println("Value Inserted");
    }

    public int deQueue() { 
        if (front == null) {
            System.out.println("Queue is Empty.");
            return -1;
        }
        int val = front.data;
        front = front.next;
        return val;
    }
    public void printQueue(){
        if (front == null) {
            System.out.println("Queue is Empty.");
            return;
        }
        Node temp = front;
        System.out.println("Queue: ");
        while(temp != null){
            System.out.print(temp.data + "  ");
            temp = temp.next;
        }
    }
}

public class Queue_DS {

    static Scanner input = new Scanner(System.in);
    static byte menu() {
        clearConsole();
        System.out.println("1] Insert Element");
        System.out.println("2] Delete Element");
        System.out.println("3] Is Queue Empty ?");
        System.out.println("4] Print Queue");
        System.out.println("5] Exit");
        byte choice = 0;
        try {
            System.out.print("\nEnter Your Choice: ");
            choice = input.nextByte();
        } catch (Exception ex) {
            System.out.println("\n\nInvalid Choice");
            input.nextLine();
        }
        return choice;
    }

    // To clear the Console
    static void clearConsole() {
        System.out.println("\033[H\033[2J");
        System.out.flush();
        // System.out.println('\f'); Or // System.out.println('\u000C');
    }

    // To Get Key Press
    static void getKeyPress() {
        try {
            char ch = (char) System.in.read();
        } catch (IOException e) {}
    }

    public static void main(String[] args) {
        Queue q1 = new Queue();

        while (true) {
            switch (menu()) {
                case 1:
                    System.out.print("\nEnter Value to Insert: ");
                    int val = input.nextInt();
                    q1.enQueue(val);
                    break;
                case 2:
                    int value = q1.deQueue(); 
                    if(value >=0)
                       System.out.println("\nDeleted Value: " + value);    
                    break;
                case 3:
                    System.out.println("\nQueue is " + (q1.isEmpty() ? "Empty." : "Not Empty."));
                    break;
                case 4:
                    q1.printQueue();
                    break;
                case 5:
                    System.exit(1);
                    break;
                default:
                    System.out.println("\nInvalid Choice");
                    break;
            }
            getKeyPress();
        }
    }
}

