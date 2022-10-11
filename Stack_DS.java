import java.util.Scanner;
import java.io.IOException;

class Stack {

    Node Head; // Main Node

    Stack() {
        Head = null;
    }

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

    public void push(int val) {
        Node newNode = new Node(val);
        if (isEmpty())
            Head = newNode;
        else {
            Node temp = Head;
            Head = newNode;
            Head.next = temp;
        }
        System.out.println("\nValue Pushed.");
    }

    public int pop() {
        if (isEmpty()) {
            System.out.println("\nStack is Underflow");
            return -1;
        } else {
            int val = Head.data;
            Head = Head.next;
            return val;
        }
    }

    public int peek() {
        if (isEmpty()) {
            System.out.println("\nStack is Underflow");
            return -1;
        } else {
            int val = Head.data;
            return val;
        }
    }

    public void printStack() {
        if (isEmpty()) {
            System.out.println("\nStack is Underflow");
            return;
        }
        Node temp = Head;
        while (temp != null) {
            System.out.print(temp.data + "  ");
            temp = temp.next;
        }
    }

}

public class Stack_DS {
    static Scanner input = new Scanner(System.in);

    static byte menu() {
        clearConsole();
        System.out.println("1] PUSH Element");
        System.out.println("2] POP Element");
        System.out.println("3] Is Stack Underflow ?");
        System.out.println("4] Print Stack");
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
        } catch (IOException e) {
        }
    }

    public static void main(String[] args) {
        Stack s1 = new Stack();

        while (true) {
            switch (menu()) {
                case 1:
                    System.out.print("\nEnter Value to Insert: ");
                    int val = input.nextInt();
                    s1.push(val);
                    break;
                case 2:
                    int popValue = s1.pop();
                    if (popValue >= 0)
                        System.out.println("\nPoped Value: " + popValue);
                    break;
                case 3:
                    System.out.println("\nStack is " + (s1.isEmpty() ? "Underflow." : "Not Underflow."));
                    break;
                case 4:
                    s1.printStack();
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
