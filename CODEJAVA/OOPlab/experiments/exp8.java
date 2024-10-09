import java.util.Scanner;

class dimension {
	Scanner in = new Scanner(System.in);
	double r;
	double getDim() {
		System.out.println("Enter Radius:");
		r = in.nextDouble();
		return r;
	}
	void display(double value) {
		System.out.println(value);
	}
}

class area extends dimension {
	double areacal(){
		return 3.14*r*r;
	}
}

class volume extends area {
	double volcal() {
		return 1.333*3.14*r*r*r;
	}
}

class exp8 {
	public static void main(String args[]){
		double r, a, v;
		volume o = new volume();
		
		r = o.getDim();
		System.out.print("The radius: ");
		o.display(r);
		
		System.out.print("The Area of Circle: ");
		a = o.areacal();
		o.display(a);
		
		System.out.print("The Volume of Sphere: ");
		v = o.volcal();
		o.display(v);
	}
}
