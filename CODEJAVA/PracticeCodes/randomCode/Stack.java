import java.util.Scanner;

public class Stack {
    static int top = -1;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size, c = 0;
        
        System.out.println("Enter size of Stack: ");
        size = sc.nextInt();
        sc.nextLine(); // consume newline
        String[] a = new String[size];
        
        while (true) {
            System.out.println("Press 1 to push,\npress 2 to pop,\nand 3 to show Stack,\npress 4 to stop");
            c = sc.nextInt();
            sc.nextLine(); // consume newline
            System.out.println();
            
            switch (c) {
                case 1:
                    push(a, size, sc);
                    break;
                case 2:
                    pop(a, sc);
                    break;
                case 3:
                    show(a);
                    break;
                case 4:
                    sc.close();
                    return;
                default:
                    System.out.println("Invalid Input!\n\n");
                    break;
            }
        }
    }
    
    public static void push(String[] a, int s, Scanner sc) {
        if (top == s - 1) {
            System.out.println("Stack OverFlow!!!\n\n");
        } else {
            System.out.printf("Your Stack has %d empty spaces.\n", (s - (top + 1)));
            if ((s - (top + 1)) == 1) {
                System.out.println("Enter a value:");
                String buffer = sc.nextLine();
                a[++top] = buffer;
                System.out.println();
            } else {
                while (true) {
                    System.out.println("How many values do you want to push right now?");
                    int hm = sc.nextInt();
                    sc.nextLine(); // consume newline
                    if (hm > (s - (top + 1))) {
                        System.out.printf("You only have %d spaces!!!\n", (s - (top + 1)));
                    } else {
                        for (int i = 0; i < hm; i++) {
                            System.out.printf("Enter value %d:\n", i + 1);
                            String buffer = sc.nextLine();
                            a[++top] = buffer;
                        }
                        System.out.println();
                        break;
                    }
                }
            }
        }
    }
    
    public static void pop(String[] a, Scanner sc) {
        if (top == -1) {
            System.out.println("Stack Underflow!!!\n\n");
        } else {
            System.out.printf("Your Stack has %d values.\n", (top + 1));
            if ((top + 1) == 1) {
                System.out.printf("Popped value: %s\n\n", a[top]);
                a[top] = null;
                top--;
            } else {
                while (true) {
                    System.out.println("How many values do you want to pop right now?");
                    int hm = sc.nextInt();
                    sc.nextLine(); // consume newline
                    if (hm > (top + 1)) {
                        System.out.printf("You only have %d values!!!\n", (top + 1));
                    } else {
                        for (int i = 0; i < hm; i++) {
                            System.out.printf("Popped value: %s\n", a[top]);
                            a[top] = null;
                            top--;
                        }
                        System.out.println();
                        break;
                    }
                }
            }
        }
    }
    
    public static void show(String[] a) {
        System.out.print("Your stack");
        if (top == -1) {
            System.out.println(" is Empty.\n\n");
        } else {
            System.out.println(" has:");
            for (int i = 0; i <= top; i++) {
                System.out.println(a[i]);
            }
            System.out.println();
        }
    }
}
