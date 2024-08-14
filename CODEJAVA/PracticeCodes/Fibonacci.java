package PracticeCodes;

import java.util.*;

public class Fibonacci {

    public static int fibonacci(int n) {
        if (n <= 1)
            return n;
        else
            return fibonacci(n - 1) + fibonacci(n - 2);
    }

    public static void printFibonacciSeries(int count) {
        System.out.println("Fibonacci Series:");
        for (int i = 0; i < count; i++) {
            System.out.print(fibonacci(i) + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            System.out.print("Enter the number of Fibonacci numbers to generate: ");
            int numTerms = in.nextInt();

            while (numTerms <= 0) {
                System.out.println("Please enter a positive integer.");
                numTerms = in.nextInt();
            }
            printFibonacciSeries(numTerms);
        }
    }
}