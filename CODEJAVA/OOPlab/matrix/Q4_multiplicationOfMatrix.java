package matrix;

import java.util.Scanner;

public class Q4_multiplicationOfMatrix {
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {

            System.out.println("Enter rows and columns of first Matrix:");
            int ar = in.nextInt();
            int ac = in.nextInt();

            System.out.println("Enter rows and columns of second Matrix:");
            int br = in.nextInt();
            int bc = in.nextInt();

            int[][] a = new int[ar][ac];
            int[][] b = new int[br][bc];

            System.out.println("Enter values of first Matrix:");
            for (int i = 0; i < ar; i++) {
                for (int j = 0; j < ac; j++) {
                    a[i][j] = in.nextInt();
                }
            }

            System.out.println("Enter values of second Matrix:");
            for (int i = 0; i < br; i++) {
                for (int j = 0; j < bc; j++) {
                    b[i][j] = in.nextInt();
                }
            }

            if (ac != br) {
                System.out.println("The multiplication of these matrices is not possible as the number of columns of the 1st matrix is not equal to the rows in the 2nd matrix.");
            } else {
                int[][] c = new int[ar][bc];

                for (int i = 0; i < ar; i++) {
                    for (int j = 0; j < bc; j++) {
                        c[i][j] = 0;
                        for (int k = 0; k < ac; k++) {
                            c[i][j] += a[i][k] * b[k][j];
                        }
                    }
                }

                System.out.println("The product of your matrices is:");
                for (int i = 0; i < ar; i++) {
                    for (int j = 0; j < bc; j++) {
                        System.out.print(c[i][j] + " ");
                    }
                    System.out.println();
                }
            }
        }
    }
}