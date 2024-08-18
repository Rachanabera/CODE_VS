package questionBankCodes;

/*
Write a program to access length and breadth of a
rectangle from user and calculate and display the area
and perimeter by using class and object concept.
*/

import java.util.*;

class AIMLqbQ1c {
    public static void main(String[] args) {
        try(Scanner in = new Scanner(System.in)) {
            System.out.println("Enter length and breadth of rectangle:");
            double l = in.nextDouble();
            double b = in.nextDouble();

            rectangle o = new rectangle(l, b);
            o.ap();
        }
    }
}

class rectangle {
    double l, b;
    rectangle (double l, double b) {
        this.l = l;
        this.b = b;
    }
    void ap() {
        System.out.println("Area of rectangle is: " + (l * b) + "and perimeter of rectangle is: " + (2 * (l + b)));
    }
}