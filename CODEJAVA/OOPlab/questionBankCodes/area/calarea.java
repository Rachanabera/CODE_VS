package questionBankCodes.area;

import java.util.*;

public class calarea {
	public static void main(String[] args) {
		double r, s, l, w , b, h;
		try (Scanner in = new Scanner(System.in)) {
			System.out.println("Enter Radius of Circle:");
			r = in.nextDouble();
			
			System.out.println("Enter Side of Square:");
			s = in.nextDouble();
			
			System.out.println("Enter Length and Breadth of Rectangle:");
			l = in.nextDouble();
			w = in.nextDouble();
			
			System.out.println("Enter Base and Height of Triangle:");
			b = in.nextDouble();
			h = in.nextDouble();
		}
		area o = new area();
		
		o.circle(r);
		o.square(s);
		o.rectangle(l, w);
		o.triangle(b, h);
	}
}

class area {
	void circle(double r){
		System.out.println("Area of Circle: " + 3.14 * r * r);
	}
	void square(double s){
		System.out.println("Area of Square: " + s * s);
	}
	void rectangle(double l, double w){
		System.out.println("Area of Rectangle: " + l * w);
	}
	void triangle(double b, double h){
		System.out.println("Area of Triangle: " + 0.5 * b * h);
	}
}