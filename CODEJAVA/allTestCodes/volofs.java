package allTestCodes;
import java.util.*;
public class volofs
{
    public static void main(String[] args)
    {
        double r,v=0;
        try (Scanner in = new Scanner(System.in))
        {
            System.out.println("Enter the radius of sphere: ");
            r = in.nextInt();
        }
        v = (4.0/3)*3.14159265359*Math.pow(r,3);
        System.out.println("The volume of Sphere is :"+v);
    }
}