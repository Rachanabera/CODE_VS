package allTestCodes;
import java.util.*;
public class test0
{
    public static void main(String[] args)
    {
        // if not written in this way its fine there will be no error.
        try (Scanner in = new Scanner(System.in))
        {
            System.out.println("Enter a character");
            char c = in.next().charAt(0);//important
            System.out.println("c = "+c);
            System.out.println("Enter a String");
            String ch = in.nextLine();
            System.out.println("ch = "+ch);
        }
    }
}