import java.util.Scanner;
public class calculatearea_MO {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Area a = new Area();
        System.out.println("Enter the Length and Breadth of Rectangle:");
        double l = in.nextDouble();
        double b = in.nextDouble();
        a.area(l, b);
        System.out.println("Enter the Side of Square:");
        double s = in.nextDouble();
        a.area(s);
    }    
}

class Area {
    void area(double l, double b) {
        System.out.println("Area of Rectangle: " + l * b);
    }
    void area(double s) {
        System.out.println("Area of Square: " + s * s);
    }
}