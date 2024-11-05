import java.util.*;

class oddException extends Exception {
	oddException(String s)
	{
		super(s);
	}
}
		
	
class oddexception {
	public static void validate(int n) throws oddException
	{
		if(n%2!=0) {
			throw new oddException("Enter even number");
		} else {
			int result = n*n;
			System.out.println("Result: " + result);
		}
	}
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number");
		int no = sc.nextInt();
		try {
			validate(no);
		} catch(oddException m) {
			System.out.println(m);
		}
	}
}