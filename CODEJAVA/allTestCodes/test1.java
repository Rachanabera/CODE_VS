package allTestCodes;
public class test1
{
    public static void main(String[] args)
    {
        int x = 1, y = 2, z = 3;
        System.out.println(x+y+z);
        //all of the below answer are String
        System.out.println(""+x+y+z);
        System.out.println(x+""+y+z);
        System.out.println(x+y+""+z);
        System.out.println(x+y+z+""+x);
    }
}