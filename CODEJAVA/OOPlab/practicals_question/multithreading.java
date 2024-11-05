
class One extends Thread {
    public void run() {
        for(int i=1;i<=10;i++) {
            System.out.println("Thread 1:" + i);
            try {
                Thread.sleep(1000);
            }
            catch(InterruptedException e) {
                System.out.println(e);
            }
        }

    }
}

class Two extends One {
    public void run() {
        for(int i=1 ; i<=10 ; i++) {
            System.out.println("Thread 2:" + i*i);
            try {
                Thread.sleep(1050);
            }
            catch(InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

public class multithreading {
    public static void main(String args[]) {
        One oe =new One();
        oe.start();
        Two tw = new Two();
        tw.start();

    }
}

/*

according to the question idek if this is what i should write😭😭😭😭
import java.util.Scanner;

class Input extends Thread {
    public int number; // Shared variable to store the number
    public boolean newNumberAvailable = false; // Flag to indicate a new number is available

    @Override
    public void run() {
        Scanner in = new Scanner(System.in);
        for (int i = 1; i <= 10; i++) {
            System.out.println("Enter number:");
            number = in.nextInt();
            newNumberAvailable = true; // Set the flag to indicate a new number

            try {
                Thread.sleep(1000); // Delay to simulate processing time
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
        in.close();
    }
}

class Output extends Thread {
    private final Input inputThread; // Reference to the input thread

    public Output(Input inputThread) {
        this.inputThread = inputThread;
    }

    @Override
    public void run() {
        for (int i = 1; i <= 10; i++) {
            // Wait until a new number is available
            while (!inputThread.newNumberAvailable) {
                try {
                    Thread.sleep(50); // Small delay to avoid busy-waiting
                } catch (InterruptedException e) {
                    System.out.println(e);
                }
            }

            // Calculate and print the square of the number
            int number = inputThread.number;
            System.out.println("Square of number: " + (number * number));

            // Reset the flag to indicate the number has been processed
            inputThread.newNumberAvailable = false;

            try {
                Thread.sleep(1050); // Slight delay to simulate processing time
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

public class Multithreading {
    public static void main(String[] args) {
        Input inputThread = new Input();
        Output outputThread = new Output(inputThread);

        inputThread.start();
        outputThread.start();
    }
}

 */