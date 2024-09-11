// Operator Overloading

public class Vector {
    private int x;
    private int y;

    public Vector(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public Vector add(Vector other) {
        return new Vector(this.x + other.x, this.y + other.y);
    }

    public Vector subtract(Vector other) {
        return new Vector(this.x - other.x, this.y - other.y);
    }

    @Override
    public String toString() {
        return "Vector(" + x + ", " + y + ")";
    }

    public static void main(String[] args) {
        Vector v1 = new Vector(2, 3);
        Vector v2 = new Vector(4, 5);

        Vector resultAdd = v1.add(v2);
        System.out.println("Addition: " + resultAdd); // Output: Vector(6, 8)

        Vector resultSub = v1.subtract(v2);
        System.out.println("Subtraction: " + resultSub); // Output: Vector(-2, -2)
    }
}