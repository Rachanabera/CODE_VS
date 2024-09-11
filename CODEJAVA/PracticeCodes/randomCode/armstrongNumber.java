import java.util.*;

public class armstrongNumber
{
    public static void main(String[] args)
    {
        int number; 
        try (Scanner in = new Scanner(System.in)) {
            System.out.println("Enter a number to check if Armstrong:");
            number = in.nextInt();
            check(number);
        }
    }
    public static void check (int n)
    {
        int copy = n, c = 0, sum = 0, rem = 0;

        while(copy > 0)
        {
            copy = copy/10;
            c++;
        }
        copy = n;
        for(int i = 0; i < c; i++)
        {
            rem = copy % 10;
            sum += Math.pow(rem, c);
            copy = copy / 10;
        }
        if(sum == n)
        {
            System.out.println(n + " is a Armstrong number.");
        }
        else
        {
            System.out.println(n + " is NOT a Armstrong number.");
        }
    }
}
