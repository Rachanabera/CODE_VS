import java.util.*;

class exp9 {
	public static void main(String[] args){
		TotalMarks t = new TotalMarks();
		t.Rollno();
		t.SemMarks();
		t.Printsports();
		t.finalMarks();
	}
}

class Student {
	void Rollno(){
		System.out.println("Enter the roll no:");
		Scanner in = new Scanner(System.in);
                in.nextInt();
	}
}

class Marks extends Student {
	static int sem1;
	static int sem2;
	void SemMarks() {
		System.out.println("Enter sem1 and sem2 Marks:");
		Scanner in = new Scanner(System.in);
		sem1 = in.nextInt();
		sem2 = in.nextInt();
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
		double result = ((sem1 + sem2)/2) + smarks;
		System.out.println("The sem1 marks are: " + sem1);
		System.out.println("The sem2 marks are: " + sem2);
		System.out.println("The final marks are: " + result);
	}
}
