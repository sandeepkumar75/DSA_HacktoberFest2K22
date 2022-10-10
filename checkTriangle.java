import java.io.*;


 public class checkTriangle
 {
   public static void main(String args[]) throws IOException
   { 
    System.out.println("WELCOME!!!");
    System.out.println("This program is to find whether a triangle can be formed by the given sides and determine the type of the triangle.");
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    System.out.println("Enter the first side: ");
    int a=Integer.parseInt(br.readLine());
    System.out.println("Enter the second side: ");
    int b=Integer.parseInt(br.readLine());
    System.out.println("Enter the third side: ");
    int c=Integer.parseInt(br.readLine());
    if(a+b>c && a+c>b && b+c>a)
    {
      System.out.println("A triangle can be formed with sides "+a+","+b+" and "+c);
      if(a==b && b==c)
        System.out.println("The triangle formed will be a equilateral triangle.");
      else if(a==b || b==c || c==a)
        System.out.println("The triangle formed will be a isosceles triangle.");
      else
        System.out.println("The triangle formed will be scalene triangle.");
    }
    else 
      System.out.println("A triangle can be formed with sides "+a+","+b+" and "+c);
   }
 }
