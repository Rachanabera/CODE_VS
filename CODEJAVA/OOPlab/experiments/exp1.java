package experiments;
import java.util.*;
public class exp1 {
	public static void main(String[] args){
		int marks;
		try (Scanner in = new Scanner(System.in)) {
			System.out.println("Enter your marks:");
			marks = in.nextInt();
		}
		int a = marks/10;
		grade(a); 
	}
	public static void grade(int a) {
		switch(a){
			case 0:
				System.out.println("Fail");
			break;
			case 1:
				System.out.println("Fail");
			break;
			case 2:
				System.out.println("Fail");
			break;
			case 3:
				System.out.println("Fail");
			break;
			case 4:
				System.out.println("Fail");
			break;
			case 5:
				System.out.println("Second Class");
			break;
			case 6:
				System.out.println("First Class");
			break;
			case 7:
				System.out.println("Distintion");
			break;
			case 8:
				System.out.println("Distintion");
			break;
			case 9:
				System.out.println("Distintion");
			break;
			case 10:
				System.out.println("Distintion");
			break;
			default:
				System.out.println("Invalid Input!!!");
			break;

			/*
				case 0 -> System.out.println("Fail");
				case 1 -> System.out.println("Fail");
				case 2 -> System.out.println("Fail");
				case 3 -> System.out.println("Fail");
				case 4 -> System.out.println("Fail");
				case 5 -> System.out.println("Second Class");
				case 6 -> System.out.println("First Class");
				case 7 -> System.out.println("Distintion");
				case 8 -> System.out.println("Distintion");
				case 9 -> System.out.println("Distintion");
				case 10 -> System.out.println("Distintion");
				default -> System.out.println("Invalid Input!!!");
			 */
		}
	}
}