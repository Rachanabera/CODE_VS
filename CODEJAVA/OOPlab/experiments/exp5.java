package experiments;

import java.util.*;

class exp5 {
	public static void main(String[] args) {
		try (Scanner in = new Scanner(System.in)) {
			System.out.println("Enter real and imaginary parts of A:");
			double r1 = in.nextDouble();
			double i1 = in.nextDouble();
			complex A = new complex(r1, i1);
			A.display('A');

			System.out.println("Enter real and imaginary parts of B:");
			double r2 = in.nextDouble();
			double i2 = in.nextDouble();
			complex B = new complex(r2, i2);
			B.display('B');

			complex C = new complex();
			C.sum(A, B);
		}
	}
}

class complex {
	double r, i;

	complex() {
		r = 0.0;
		i = 0.0;
	}

	complex(double r, double i) {
		this.r = r;
		this.i = i;
	}

	void sum(complex A, complex B) {
		System.out.println("Result = " + (A.r + B.r) + " + " + (A.i + B.i) + "i");
	}

	void display(char A) {
		System.out.println(A + " = " + r + " + " + i + "i");
		System.out.println();
	}
}