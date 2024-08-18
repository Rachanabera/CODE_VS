package questionBankCodes.forRecursion;

import java.util.*;

public class Factorial {
    public static int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }

    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            System.out.print("Enter a number to calculate its factorial: ");
            int number = in.nextInt();
            
            while (number < 0) {
                System.out.println("Please enter a non-negative integer.");
                number = in.nextInt();
            }

            System.out.println("Factorial of " + number + " is: " + factorial(number));
        }
    }
}