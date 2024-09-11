package classAccessing;
public class Area {
    public double circle(double r) {
        return 3.14 * r * r;
    }

    public double triangle(double b, double h) {
        return 0.5 * b * h;
    }

    public double square(double s) {
        return s * s;
    }

    public double rectangle(double l, double w) {
        return l * w;
    }
}