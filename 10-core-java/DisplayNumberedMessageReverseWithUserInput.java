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
          for(iCnt=iNo;iCnt>=1;iCnt--)
          {
            System.out.println("-------------------------");
            System.out.println(iCnt +"."+"Jay Ganesh.....");
            //for C printf("%d Jay Ganesh.....",iCnt);   iCNt value store in %d
            System.out.println("-------------------------");
          }
      }
}



class DisplayNumberedMessageReverseWithUserInput
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
