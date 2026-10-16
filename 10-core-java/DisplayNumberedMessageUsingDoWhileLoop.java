import java.util.Scanner;



class Iteration
{
      public  void Display(int iNo)
      {

          int iCnt =0;
          
          iCnt =1;
        
          do
          {
            System.out.println("-------------------------");
            System.out.println(iCnt +"."+"Jay Ganesh.....");
            System.out.println("-------------------------");

            iCnt++;
          }while(iCnt<=iNo);
      }
}



class DisplayNumberedMessageUsingDoWhileLoop
{

    public static void main(String A[])
    {
      
      Scanner scanner = new Scanner(System.in);
      System.out.println("Enter the frequency : ");
      int iValue = scanner.nextInt();

      
      Iteration iteration = new Iteration();
      

    

      iteration.Display(iValue);
    }
}
