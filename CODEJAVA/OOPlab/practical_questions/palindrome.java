import java.util.*;

public class palindrome {
    public static void main(String[] args) {
        String str, rev, temp = "";
        System.out.print("Enter the string: ");
        Scanner in = new Scanner(System.in);
        str = in.nextLine();

        System.out.println("String Class: ");
        for (int i = (str.length()-1); i >= 0; i--) {
            temp = temp + str.charAt(i);
        }
        if(temp.equals(str)) {
            System.out.println(str + " is a palindrome.");
        } else {
            System.out.println(str + " is not a palindrome.");
        }

        System.out.println("StringBuffer Class: ");
        StringBuffer s = new StringBuffer(str);
        s.reverse();
        rev = s.toString();
        
        if(str.equals(rev)) {
            System.out.println(str + " is a palindrome.");
        }
        else {
            System.out.println(str + " is not a palindrome.");
        }
    }
}
