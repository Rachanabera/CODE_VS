package questionBankCodes.areaUsingConstructor;

class areaandperimeterUC {
	public static void main(String[] args) {
		areaandperimeter o = new areaandperimeter();
		o.circle();
		o.square();
		o.rectangle();
		o.triangle();
	}
}

class areaandperimeter {
	double r, s, l, w, a, b, c, h;
	areaandperimeter() {
		r = 10;
		s = 10;
		l = 10;
		w = 10;
		a = 10;
		b = 10;
		c = 10;
		h = 10;
	}
	void circle(){
		System.out.println("Area of Circle: " + 3.14 * r * r);
		System.out.println("Perimeter/circumference of Circle: " + 2 * 3.14 * r);
		System.out.println();
	}
	void square(){
		System.out.println("Area of Square: " + s * s);
		System.out.println("Perimeter of Square: " + 4 * s);
		System.out.println();
	}
	void rectangle(){
		System.out.println("Area of Rectangle: " + l * w);
		System.out.println("Perimeter of Rectangle: " + 2 * (l + w));
		System.out.println();
	}
	void triangle(){
		System.out.println("Area of Triangle: " + 0.5 * b * h);
		System.out.println("Perimeter of Triangle: " + (a + b + c));
		System.out.println();
	}
}