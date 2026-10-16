import java.util.Scanner;



class Iteration
{
      public  void Display(int iNo)
      {

          int iCnt =0;

          //input filter
          if (iNo<0) 
          {
            System.out.println("Invalid Input  ");
          }
          for(iCnt=1;iCnt<=iNo;iCnt++)
          {
            System.out.println("Jay Ganesh.....");
          }
      }
}



class DisplayMessageWithNegativeInputFilter
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
