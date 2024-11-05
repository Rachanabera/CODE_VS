import java.util.Scanner;
class complexnumber {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
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
			C = C.sum(A, B);
			System.out.println("Result = " + C.r + " + " + C.i + "i");
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

	complex sum(complex A, complex B) {
		complex C = new complex();
		C.r = A.r + B.r;
		C.i = A.i + B.i;
		return C;
	}

	void display(char A) {
		System.out.println(A + " = " + r + " + " + i + "i");
		System.out.println();
	}
}