package classAccessing;

import java.util.*;

public class calculate {
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            System.out.println("Enter");
            double r = in.nextDouble();
            Area a = new Area();
            System.out.println("Circle area: " + a.circle(r));
            System.out.println("Triangle area: " + a.triangle(10, 20));
            System.out.println("Square area: " + a.square(10));
            System.out.println("Rectangle area: " + a.rectangle(10, 20));
        }
    }
}