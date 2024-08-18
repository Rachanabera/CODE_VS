package questionBankCodes;

class objectPandR {
	public static void main(String[] args) {
			number A = new number(10);
			A.passobject(A);

			number B = A.returnobject();

			A.display('A');
			B.display('B');
	}
}

class number {
	double n;
	number(double n) {
        this.n = n;
	}
	void passobject(number A) {
		System.out.println("Object A passed as argument, A.n = " + A.n);
		System.out.println();
	}
	number returnobject() {
		System.out.println("Object C returned as argument to Object B");
		System.out.println();
		
		number C = new number(69);
		return C;
	}
	void display(char c) {
		System.out.println(c + " = " + n);
		System.out.println();
	}
}