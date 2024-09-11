package matrix;

import java.util.Scanner;

public class Q1_transposeOfMatrix {
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            int A[][] = new int[3][3];
            System.out.println("Enter Matrix elements:");
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    A[i][j] = in.nextInt();
                }
            }
            System.out.println("Transpose of Matrix is:");
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    System.out.print(A[j][i] + " ");
                }
                System.out.println();
            }
        }
    }
}