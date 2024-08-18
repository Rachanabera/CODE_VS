package questionBankCodes.areaUsingConstructor;

class areaUC {
	public static void main(String[] args) {
		onlyarea o = new onlyarea();
		o.circle();
		o.square();
		o.rectangle();
		o.triangle();
	}
}

class onlyarea {
	double r, s, l, w, b, h;
	onlyarea() {
		r = 10;
		s = 10;
		l = 10;
		w = 10;
		b = 10;
		h = 10;
	}
	void circle(){
		System.out.println("Area of Circle: " + 3.14 * r * r);
		System.out.println();
	}
	void square(){
		System.out.println("Area of Square: " + s * s);
		System.out.println();
	}
	void rectangle(){
		System.out.println("Area of Rectangle: " + l * w);
		System.out.println();
	}
	void triangle(){
		System.out.println("Area of Triangle: " + 0.5 * b * h);
		System.out.println();
	}
}