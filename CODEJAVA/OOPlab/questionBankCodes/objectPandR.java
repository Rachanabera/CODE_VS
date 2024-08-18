package questionBankCodes;

import java.util.*;
class objectPandR {
	public static void main(String[] args) {
		try (Scanner in = new Scanner(System.in)) {
			System.out.println("Enter of A:");
			double n = in.nextDouble();
			number A = new number(n);
			A.display('A');
			
			System.out.println("Enter real and imaginary parts of B:");
			double n0 = in.nextDouble();
			number B = new number(n0);
			B.display('B');
			
			number C = new number();
			C.sum(A, B);
		}
	}
}

class number {
	double n;
	number() {
		n = 0.0;
	}
	number(double n) {
        this.n = n;
	}
	void sum(number A, number B) {
		System.out.println("Result = " + (A.n + B.n));
	}
	void display(char A) {
		System.out.println(A +" = " + n);
		System.out.println();
	}
}