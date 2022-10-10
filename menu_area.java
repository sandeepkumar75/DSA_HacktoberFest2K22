import java.util.Scanner;
public class menu_area
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int ch;
        double area;
        System.out.println("\t \t ===================================================");
        System.out.println("\t \t \t ||   Welcome to Area calculator!   ||");
        System.out.println("\t \t ===================================================");
        System.out.println("Options :- ");
        System.out.println("\t 1. Rectangle");
        System.out.println("\t 2. Square");
        System.out.println("\t 3. Circle");
        System.out.println("\t 4. Rhombus");
        System.out.println("\t 5. Right angled triangle.");
        System.out.println("\t 6. Equilateral triangle.");
        System.out.print("Enter your choice : ");
        ch = sc.nextInt();
        switch (ch)
        {
            case 1:
                System.out.println(">>> You have selected for calculating the area of rectangle! <<<");
                System.out.println("Enter the length of rectangle: ");
                int l = sc.nextInt();
                System.out.println("Enter the breadth of rectangle: ");
                int b = sc.nextInt();
                area= l*b;
                System.out.println("Area = "+area);
                break;
            case 2:
                System.out.println(">>> You have selected for calculating the area of square! <<<");
                System.out.println("Enter the side of square: ");
                int s = sc.nextInt();
                area= s*s;
                System.out.println("Area = "+area);
                break;
            case 3:
                System.out.println(">>> You have selected for calculating the area of circle! <<<");
                System.out.println("Enter the radius of circle: ");
                int r = sc.nextInt();
                area= 3.14*r*r;
                System.out.println("Area = "+area);
                break;
            case 4:
                System.out.println(">>> You have selected for calculating the area of rhombus! <<<");
                System.out.println("Enter the length of first diagonal of rhombus: ");
                int d1 = sc.nextInt();
                System.out.println("Enter the breadth of second diagonal of rhombus: ");
                int d2 = sc.nextInt();
                area= (d1*d2)/2;
                System.out.println("Area = "+area);
                break;
            case 5:
                System.out.println(">>> You have selected for calculating the area of right angled triangle! <<<");
                System.out.println("Enter the length of base of the right angled triangle: ");
                int bx = sc.nextInt();
                System.out.println("Enter the height of the right angled triangle: ");
                int hx = sc.nextInt();
                area= (bx*hx)/2;
                System.out.println("Area = "+area);
                break;
            case 6:
                System.out.println(">>> You have selected for calculating the area of equilateral triangle! <<<");
                System.out.println("Enter the length of a side of equilateral triangle: ");
                int a = sc.nextInt();
                area= (Math.sqrt(3)*a*a)/4;
                System.out.println("Area = "+area);
                break;
            default:
                System.out.println("Wrong choice!");
        }
        System.out.println("");
        System.out.println("Thanks for using this area calculator. Have a nice day ahead!");

    }
}
