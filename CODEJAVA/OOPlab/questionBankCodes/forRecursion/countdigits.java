package questionBankCodes.forRecursion;

import java.util.Scanner;

public class countdigits {
    static int c = 0;

    public static void count(int n) {
        if(n == 0 && c == 0){
            c++;
            return;
        }

        if (n == 0) {
            return;
        } else {
            c++;
            count(n / 10);
        }
    }
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            System.out.print("Enter a number to count number of digits: ");
            int number = in.nextInt();
            c = 0;
            count(number);
            System.out.println("Number of digits of " + number + " are: " + c);
        }
    }
}