class A extends Thread {
    public void foo() {
        System.out.println("foo");
    }
    public void run() {
        try {
            Thread.sleep(1000);
            foo();
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

class B extends Thread {
    public void bar() {
        System.out.println("bar");
    }
    public void run() {
        try {
            Thread.sleep(1000);
            bar();
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

public class DeadLock {
    public static void main(String[] args) {
        A a = new A();
        B b = new B();
        a.start();
        b.start();
    }  
}