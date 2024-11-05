import java.util.Scanner;

public class transpose {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a[][] = new int[3][3];
        System.out.println("Enter Matrix elements:");
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                a[i][j] = in.nextInt();
            }
        }
        System.out.println("Transpose of Matrix is:");
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                System.out.print(a[j][i] + " ");
            }
            System.out.println();
        }
    }
}