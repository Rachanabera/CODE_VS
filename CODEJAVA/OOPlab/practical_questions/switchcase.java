import java.util.Scanner;
public class switchcase {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the Marks:");
        int n = in.nextInt();
        grade(n/10);
    }
    public static void grade(int n) {
        switch(n){
            case 1:
                System.out.println("Fail");
                break;
            case 2:
                System.out.println("Fail");
                break;
            case 3:
                System.out.println("Fail");
                break;
            case 4:
                System.out.println("Pass");
                break;
            case 5:
                System.out.println("Second Class");
                break;
            case 6:
                System.out.println("First Class");
                break;
            case 7:
                System.out.println("Distintion");
                break;
            case 8:
                System.out.println("Distintion");
                break;
            case 9:
                System.out.println("Distintion");
                break;
            case 10:
                System.out.println("Distintion");
                break;
        }
    }
}