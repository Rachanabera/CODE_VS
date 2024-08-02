// BufferReader input.
package allTestCodes;

import java.io.*;

public class test3 
{
    public static void main(String[] args) throws IOException
    {
        double list[] = new double[5];
        
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        
        System.out.println("Enter 5 number:");
        for(int i = 0; i < 5; i++){
            String input = br.readLine();
            list[i] = Double.parseDouble(input);
        }
        System.out.println("Your number are:");
        for(int i = 0; i < 5; i++)
        {
            System.out.println(list[i]);
        }
    }
}