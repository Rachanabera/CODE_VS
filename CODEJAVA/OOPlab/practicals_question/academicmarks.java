import java.util.*;

class academinmarks {
	public static void main(String[] args){
		TotalMarks t = new TotalMarks();
		t.SemMarks();
		t.Printsports();
		t.finalMarks();
	}
}

class Marks {
	static double sem1;
	static double sem2;
	void SemMarks() {
		System.out.println("Enter sem1 and sem2 Marks:");
		Scanner in = new Scanner(System.in);
		sem1 = in.nextDouble();
		sem2 = in.nextDouble();
	}
}

interface Sports {
	double smarks = 5.02;
}

class TotalMarks extends Marks implements Sports {
	
	void Printsports() {
		System.out.println("The sports marks are:" + smarks);
	}
	void finalMarks() {
		double result = ((sem1 + sem2)/2.0) + smarks;
		System.out.println("The sem1 marks are: " + sem1);
		System.out.println("The sem2 marks are: " + sem2);
		System.out.println("The final marks are: " + result);
	}
}
