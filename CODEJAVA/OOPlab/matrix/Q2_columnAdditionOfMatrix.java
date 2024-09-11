package matrix;

import java.util.Scanner;

public class Q2_columnAdditionOfMatrix {
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            int A[][] = new int[3][3], sum[] = new int[3];
            System.out.println("Enter Matrix elements:");
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    A[i][j] = in.nextInt();
                }
            }
            System.out.println("Column addition is:");
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    sum[j] = sum[j] + A[i][j];
                }
            }
            /*
                example
                1 2 3
                4 5 6
                7 8 9
                result
                12
                15
                18
            */
            /*
                System.out.println("Row addition:");
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        sum[j] = sum[j] + A[j][i];
                    }
                }
                example
                1 2 3
                4 5 6
                7 8 9
                result
                6
                15
                24
            */
            for (int j = 0; j < 3; j++) {
                System.out.println(sum[j] + " ");
            }
        }
    }
}