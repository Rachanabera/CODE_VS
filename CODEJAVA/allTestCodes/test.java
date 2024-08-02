package allTestCodes;
public class test
{
    public static void main(String[] args)
    {
        int i = 2, j = 3, k, l;
        double a, b;
        k = i / j * j;
        l = j / i * i;
        a = i / j * j;
        b = j / i * i;
        System.out.println(k+", "+l+", "+a+", "+b);
        // output is 0, 2, 0.0, 2.0
        /*
        double i = 2, j = 3, k, l;
        double a, b;
        k = i / j * j;
        l = j / i * i;
        a = i / j * j;
        b = j / i * i;
        System.out.println(k+", "+l+", "+a+", "+b);
        output is 2.0, 3.0, 2.0, 3.0
         */
        // Brackets -> order -> %,*,/ -> +,- 
        /*
         * b % a = b [ where b < a ]
         * a % -b = a % b
         */
    }
}