package matrix;

import java.util.Scanner;

public class Q3_diagonalAdditionOfMatrix {
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            int A[][] = new int[3][3], sum = 0;
            System.out.println("Enter Matrix elements:");
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    A[i][j] = in.nextInt();
                }
            }
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if(i == j || i + j == 2){
                        sum = sum + A[i][j];
                    }
                }
            }
            System.out.println("Sum of Diagonal elements is:" + sum);
        }
    }
}