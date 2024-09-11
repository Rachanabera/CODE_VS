import java.util.Scanner;
public class addRecursion {
    public static int add(int n) {
        if (n < 0) {
            return 0;
        } else {
            return n + add(n - 1);
        }
    }

    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            System.out.print("Enter a number: ");
            int number = in.nextInt();
            System.out.println("Result: " + add(number));
        }
    }
}