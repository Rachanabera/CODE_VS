package experiments;
import java.util.Scanner;

public class exp7 {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Enter a string: ");
            String input = scanner.nextLine();
            
            if (isPalindromeUsingString(input)) {
                System.out.println("The string is a palindrome (using String).");
            } else {
                System.out.println("The string is not a palindrome (using String).");
            }
            
            
            if (isPalindromeUsingStringBuffer(input)) {
                System.out.println("The string is a palindrome (using StringBuffer).");
            } else {
                System.out.println("The string is not a palindrome (using StringBuffer).");
            }
        }
    }

                                        
    public static boolean isPalindromeUsingString(String str) {
        String cleanedString = str.replaceAll("[\\W_]", "").toLowerCase();
        String reversedString = new StringBuilder(cleanedString).reverse().toString();
        return cleanedString.equals(reversedString);
    }

  
    public static boolean isPalindromeUsingStringBuffer(String str) {
        String cleanedString = str.replaceAll("[\\W_]", "").toLowerCase();
        StringBuffer stringBuffer = new StringBuffer(cleanedString);
        String reversedString = stringBuffer.reverse().toString();
        return cleanedString.equals(reversedString);
    }

}