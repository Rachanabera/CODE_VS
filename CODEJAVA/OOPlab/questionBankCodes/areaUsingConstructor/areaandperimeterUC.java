package questionBankCodes.areaUsingConstructor;

import java.util.Scanner;

class areaandperimeterUC {
	public static void main(String[] args) {
		double r, a, b, c, h;
        int s, l, w;
        try (Scanner in = new Scanner(System.in)) {
            System.out.println("Enter Radius of Circle:");
            r = in.nextDouble();
            
            System.out.println("Enter Side of Square:");
            s = in.nextInt();
            
            System.out.println("Enter Length and Breadth of Rectangle:");
            l = in.nextInt();
            w = in.nextInt();
            
            System.out.println("Enter 3 sides and Height of Triangle:");
			a = in.nextDouble();
            b = in.nextDouble();
            c = in.nextDouble();
            h = in.nextDouble();
        }
		new circles(r);
		new squares(s);
		new rectangles(l, w);
		new triangles(a, b, c, h);
	}
}

class circles {
	circles(double r) {
		System.out.println("Area of Circle: " + 3.14 * r * r);
		System.out.println("Perimeter/circumference of Circle: " + 2 * 3.14 * r);
		System.out.println();
	}
}

class squares {
	squares(double s) {
		System.out.println("Area of Square: " + s * s);
		System.out.println("Perimeter of Square: " + 4 * s);
		System.out.println();
	}
}

class rectangles {
	rectangles(double l, double w) {
		System.out.println("Area of Rectangle: " + l * w);
		System.out.println("Perimeter of Rectangle: " + 2 * (l + w));
		System.out.println();
	}
}

class triangles {
	triangles(double a, double b, double c, double h) {
		System.out.println("Area of Triangle: " + 0.5 * b * h);
		System.out.println("Perimeter of Triangle: " + (a + b + c));
		System.out.println();
	}
}