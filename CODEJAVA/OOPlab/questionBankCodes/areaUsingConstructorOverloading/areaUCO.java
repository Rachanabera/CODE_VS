package questionBankCodes.areaUsingConstructorOverloading;

class areaUCO {
	public static void main(String[] args) {
		onlyarea o = new onlyarea();
		o.circle();
		o.square();
		o.rectangle();
		o.triangle();

        onlyarea o0 = new onlyarea(69, 69, 69, 69, 69, 69);
		o0.circle();
		o0.square();
		o0.rectangle();
		o0.triangle();
	}
}

class onlyarea {
	double r, s, l, w, b, h;
	onlyarea() {
        System.out.println("Default values:");
		r = 10;
		s = 10;
		l = 10;
		w = 10;
		b = 10;
		h = 10;
	}
    onlyarea(double r, double s, double l, double w, double b, double h) {
        System.out.println("Parameterized values:");
		this.r = r;
		this.s = s;
		this.l = l;
		this.w = w;
		this.b = b;
		this.h = h;
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