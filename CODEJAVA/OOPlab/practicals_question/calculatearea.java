import java.util.Scanner;
public class calculatearea {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Area a = new Area();
        System.out.println("Enter the Length and Breadth of Rectangle:");
        double l = in.nextDouble();
        double b = in.nextDouble();
        a.Rectangle(l, b);
        System.out.println("Enter the Side of Square:");
        double s = in.nextDouble();
        a.Square(s);
    }    
}

class Area {
    void Rectangle(double l, double b) {
        System.out.println("Area of Rectangle: " + l * b);
    }
    void Square(double s) {
        System.out.println("Area of Square: " + s * s);
    }
}