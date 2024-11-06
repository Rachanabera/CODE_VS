import java.util.Scanner;

public class addition_of_matrices {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a[][] = new int[3][3];
        int b[][] = new int[3][3];
        System.out.println("Enter the elements of the first matrix: ");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                a[i][j] = in.nextInt();
            }
        }
        System.out.println("Enter the elements of the second matrix: ");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                b[i][j] = in.nextInt();
            }
        }
        System.out.println("The addition of the matrices is: ");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {    
                System.out.print(a[i][j] + b[i][j] + " ");
            }
            System.out.println();
        }
    }
}