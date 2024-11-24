class Box {
    double width, height, depth;

    Box(double width, double height, double depth) {
        this.width = width;
        this.height = height;
        this.depth = depth;
    }

    double volume() {
        return width * height * depth;
    }
}

class BoxWeight extends Box {
    double weight;

    BoxWeight(double width, double height, double depth, double weight) {
        super(width, height, depth);
        this.weight = weight;
    }
}

class Shipment extends BoxWeight {
    double cost;

    Shipment(double width, double height, double depth, double weight, double cost) {
        super(width, height, depth, weight);
        this.cost = cost;
    }

    void display() {
        System.out.println("Dimensions (WxHxD): " + width + " x " + height + " x " + depth);
        System.out.println("Volume: " + volume());
        System.out.println("Weight: " + weight);
        System.out.println("Shipping Cost: $" + cost);
    }
}

public class DemoShipment {
    public static void main(String[] args) {
        Shipment shipment = new Shipment(10, 20, 15, 25, 50);
        shipment.display();
    }
}
