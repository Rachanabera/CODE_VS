package experiments;

import java.util.*;

class exp6 {
	public static void main(String[] args) {
		try (Scanner in = new Scanner(System.in)) {
			System.out.println("Enter row and column:");
			int r = in.nextInt();
			int c = in.nextInt();
			int a[][] = new int[r][c];
			int b[][] = new int[r][c];
			System.out.println("Enter value for A:");
			for(int i = 0; i < r; i++) {
				for(int j = 0; j < c; j++) {
					a[i][j] = in.nextInt();
				}
				System.out.println("");
			}
			System.out.println("Enter value for B:");
			for(int i = 0; i < r; i++) {
				for(int j = 0; j < c; j++) {
					b[i][j] = in.nextInt();
				}
				System.out.println("");
			}
			
			addition o = new addition();
			o.additions(r, c, a, b);
		}
	}
}

class addition {
	void additions(int r, int c, int a[][], int b[][]) {
		System.out.println("Result:");
		for(int i = 0; i < r; i++) {
			for(int j = 0; j < c; j++) {
				System.out.print(a[i][j] + b[i][j] + " ");
			}
			System.out.println("");
		}
	}
}
