package matrix;

import java.util.Scanner;

public class Q6_sortArrayAscending {
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            int A[] = new int[10], temp = 0;
            System.out.println("Enter Matrix elements:");
            for (int i = 0; i < 10; i++) {
                A[i] = in.nextInt();
            }
            System.out.println("Array before sorting in ascending order is:");
            for (int i = 0; i < 10; i++) {
                System.out.print(A[i] + " ");
            }
            System.out.println();
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 10 - i - 1; j++) {
                    if (A[j] > A[j + 1]) {
                        temp = A[j];
                        A[j] = A[j + 1];
                        A[j + 1] = temp;
                    }
                }
            }
            System.out.println("Array after sorting in ascending order is:");
            for (int i = 0; i < 10; i++) {
                System.out.print(A[i] + " ");
            }
            System.out.println();
        }
    }
}