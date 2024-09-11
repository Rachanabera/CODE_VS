import java.util.*;

public class hasNextInt {
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            System.out.println("Please enter an integer:");

            Boolean b = in.hasNextInt();
            
            int number = in.nextInt();
            
            System.out.println("Is " + number + " a Integer: " + b);
        }
    }
}