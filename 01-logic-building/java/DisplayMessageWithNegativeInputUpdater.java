import java.util.Scanner;



class Iteration
{
      public  void Display(int iNo)
      {

          int iCnt =0;

          //input updater
          
          if (iNo<0) 
          {
            iNo = -iNo;
          }
          for(iCnt=1;iCnt<=iNo;iCnt++)
          {
            System.out.println("Jay Ganesh.....");
          }
      }
}



class DisplayMessageWithNegativeInputUpdater
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
