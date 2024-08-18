package questionBankCodes.forRecursion;

import java.util.Scanner;

public class Fibonacci {
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            System.out.print("Enter the number of elements for the Fibonacci series: ");
            int n = in.nextInt();
            
            while(n <= 0) {
                System.out.println("Please enter a positive integer.");
                n = in.nextInt();
            }

            System.out.println("Fibonacci Series:");
            for (int i = 0; i < n; i++) {
                System.out.print(fibonacci(i) + " ");
            }
        }
    }
    
    public static int fibonacci(int n) {
        if (n <= 1) {
            return n;
        }
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}