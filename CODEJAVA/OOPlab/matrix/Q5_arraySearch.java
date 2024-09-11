package matrix;

import java.util.Scanner;

public class Q5_arraySearch {
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            int A[] = new int[5], n = 0, found = 0;
            System.out.println("Enter Array elements:");
            for(int i = 0; i < 5; i++){
                A[i] = in.nextInt();
            }
            System.out.println("Enter number to be searched:");
            n = in.nextInt();
            for(int i = 0; i < 5; i++){
                if(A[i] == n){
                    found = i;
                    break;
                }
            }
            if(found != 0){
                System.out.println("Element found at index " + found + ".");
            } else {
                System.out.println("Element not found!!!!");
            }
        }
    }
}
