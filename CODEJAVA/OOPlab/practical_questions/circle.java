import java.util.Scanner;

class input{
    double r;
    void input(){
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the radius of the circle: ");
        r = in.nextDouble();
    }
}

class area_of_circle extends input{
    void area() {
        System.out.println("Area of the circle: " + 3.14 * r * r);
    }
}

class cal extends area_of_circle{
    void volume() {
        System.out.println("Volume of the sphere: " + (1.33 * 3.14 * r * r * r));
    }
}

class circle extends cal{
    public static void main(String[] args) {
        cal obj = new cal();
        obj.input();
        obj.area();
        obj.volume();
    }
}