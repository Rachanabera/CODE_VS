package questionBankCodes.areaUsingConstructorOverloading;

import java.util.Scanner;

public class areaUCO {
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

        // Passing user input to constructors
        new Area(r);
        new Area(s);
        new Area(l, w);
        new Area(b, h);
    }
}

class Area {
    Area(double r) {
        System.out.println("Area of Circle: " + Math.PI * r * r);
		System.out.println();
    }

    Area(int s) {
        System.out.println("Area of Square: " + s * s);
		System.out.println();
    }

    Area(int l, int w) {
        System.out.println("Area of Rectangle: " + l * w);
		System.out.println();
    }

    Area(double b, double h) {
        System.out.println("Area of Triangle: " + 0.5 * b * h);
		System.out.println();
    }
}