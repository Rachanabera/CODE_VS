package allTestCodes;
import java.util.*;
public class test2
{
    public static void main(String[] args)
    {
        try (Scanner in = new Scanner(System.in)) {
            int a,b;
            System.out.println("Enter a number");
            a = in.nextInt();
            b = 3;
            System.out.println("a = "+(a+b));
        }
    }
}