import java.util.*;
class E {
    int Emp_ID;
    int Emp_Salary;
    String Emp_Name;
    public E(int Emp_ID, int Emp_Salary, String Emp_Name) {
        this.Emp_ID = Emp_ID;
        this.Emp_Salary = Emp_Salary;
        this.Emp_Name = Emp_Name;
    }
    public void display() {
        System.out.println("\nDetails of employee");
        System.out.println("ID: " + Emp_ID);
        System.out.println("Salary: " + Emp_Salary);
        System.out.println("Name: " + Emp_Name);
    }
}

public class Emp {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        E e1[] = new E[2];
        for(int i = 0; i < 2; i++) {
            System.out.println("Enter ID, Salary and Name of employee " + (i + 1));
            e1[i] = new E(in.nextInt(), in.nextInt(), in.nextLine());
        }
        for(int i = 0; i < 2; i++) {
            e1[i].display();
        }
    }
}