import java.util.*;

class primeException extends Exception {
	primeException(String s)
	{
		super(s);
	}
}
		
	
class primeexception {
	public static void validate(int n) throws primeException
	{
        int c = 0;
        for(int i = 2; i < n; i++) {
            if(n % i == 0) {
                c++;
                break;
            }
        }
        if(c== 0) {
            System.out.println("Result: " + n*n);
        } else {
            throw new primeException("Enter a Prime number");
        }
	}
	
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the number");
		int n = in.nextInt();
		try {
			validate(n);
		} catch(primeException m) {
			System.out.println(m);
		}
	}
}