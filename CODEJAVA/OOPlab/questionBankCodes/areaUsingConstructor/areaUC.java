package questionBankCodes.areaUsingConstructor;

import java.util.Scanner;

class areaUC {
	public static void main(String[] args) {
		double r, b, h;
        int s, l, w;
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
		new circle(r);
		new square(s);
		new rectangle(l, w);
		new triangle(b, h);
	}
}

class circle {
	circle(double r) {
		System.out.println("Area of Circle: " + 3.14 * r * r);
		System.out.println();
	}
}

class square {
	square(double s) {
		System.out.println("Area of Square: " + s * s);
		System.out.println();
	}
}

class rectangle {
	rectangle(double l, double w) {
		System.out.println("Area of Rectangle: " + l * w);
		System.out.println();
	}
}

class triangle {
	triangle(double b, double h) {
		System.out.println("Area of Triangle: " + 0.5 * b * h);
		System.out.println();
	}
}