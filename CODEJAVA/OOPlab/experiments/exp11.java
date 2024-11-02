class One extends Thread
{
 public void run()
 {
  for(int i=1;i<=10;i++)
  {
   System.out.println("Thread 1:" +i);
   try
   {
    Thread.sleep(1000);
   }
   catch(InterruptedException e)
   {
    System.out.println(e);
   }
  }
 }
}

class Two extends Thread
{
 public void run()
 {
  for(char i=1;i<=10;i++)
  {
   System.out.println("Thread 2:" +i*i);
   try
   {
    Thread.sleep(1050);
   }
   catch(InterruptedException e)
   {
    System.out.println(e);
   }
  }
 }
}

public class exp11
{
 public static void main(String args[])
 {
  One oe=new One();
  oe.start();
  Two to=new Two();
  to.start();
 }
}
