import java.util.*;
class dividebynum {
  public static void dividebynum(double m,double n){
      if (n == 0) {
         throw new ArithmeticException();
     } else{
         System.out.println(m/n);
     }
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    double m,n;
    System.out.println("Enter 2 numbers");
    m=sc.nextDouble();
    n=sc.nextDouble();
    try {
      dividebynum(m, n);
    } catch (ArithmeticException e) {
      System.out.println("Trying to divide by zero");
    }
  }
}