import java.util.Scanner;

public class hNI {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Please enter an integer:");
        
        boolean b = scanner.hasNextInt();
        
        if (b) { 
            int number = scanner.nextInt();
            System.out.println("You entered: " + number);
        } else { 
            System.out.println("That's not a valid integer.");
        }

        System.out.println("hasNextInt() returned: " + b);

        scanner.close();
    }
}