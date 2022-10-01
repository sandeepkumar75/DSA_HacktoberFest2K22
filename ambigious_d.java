/*
program shows the ambiguous overloading of method
AIM :: To know about Ambiguous Overloading Concept in Java
 */
package basic_package;

public class ambiguous_overloading {

    public static void main(String[] args) {

//        System.out.println(max(1, 2));
        // here both max method is possible , because of neither is better than other the invocation is ambiguous , returning in compile error
    }

    /**
     * The max method will return the maximum among two value passes in the argument.
     *
     * @param n1 to store first number (integer)
     * @param n2 to store second number (double)
     * @return The maximum of 2 numbers
     */
    public static double max(int n1, double n2) {
        if (n1 < n2)
            return n1;

        return n2;
    }

    /**
     * The max method will return the maximum among two value passes in the argument.
     *
     * @param n1 to store first number (double)
     * @param n2 to store second number (integer)
     * @return The maximum of 2 numbers
     */
    public static double max(double n1, int n2) {
        if (n1 < n2)
            return n1;

        return n2;
    }
}

/*
Here Compiler unable to find the best method among 2 overloaded methods :(
So this situation is known as Ambiguous Overloading.
 */