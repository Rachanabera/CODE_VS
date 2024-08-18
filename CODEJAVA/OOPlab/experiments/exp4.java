package experiments;
import java.util.*;

public class exp4 {
	public static void main(String[] args) {
		double r, b, h;
		int s, l, w ;
		try (Scanner in = new Scanner(System.in)) {
			System.out.println("Enter Radius of Circle:");
			r = in.nextDouble();
			
			System.out.println("Enter Side of Square:");
			s = in.nextInt();
			
			System.out.println("Enter Length and Breadth of Rectangle:");
			l = in.nextInt();
			w = in.nextInt();
			
			System.out.println("Enter Base and Height of Triangle:");
			b = in.nextDouble();
			h = in.nextDouble();
		}
		areas o = new areas();
		
		o.area(r);
		o.area(s);
		o.area(l, w);
		o.area(b, h);
	}
}

class areas {
	void area(double r){
		System.out.println("Area of Circle: " + 3.14 * r * r);
	}
	void area(int s){
		System.out.println("Area of Square: " + s * s);
	}
	void area(int l, int w){
		System.out.println("Area of Rectangle: " + l * w);
	}
	void area(double b, double h){
		System.out.println("Area of Triangle: " + 0.5 * b * h);
	}
}