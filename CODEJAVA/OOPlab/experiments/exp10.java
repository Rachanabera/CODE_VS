import java.util.*;

class oddException extends Exception {
	oddException(String s)
	{
		super(s);
	}
}
		
	
class exp10
{
	public static void validate(int no) throws oddException
	{
		if(no%2!=0) {
			throw new oddException("Enter the even number");
		} else {
			int result = no*no;
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


