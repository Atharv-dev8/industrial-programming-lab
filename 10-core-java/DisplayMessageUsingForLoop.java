class Iteration
{
      public  void Display()
      {

          int iCnt =0;
          for(iCnt=1;iCnt<=5;iCnt++)
          {
            System.out.println("Jay Ganesh.....");
          }
      }
}



class DisplayMessageUsingForLoop
{

    public static void main(String A[])
    {
      Iteration iteration = new Iteration();
      
      iteration.Display();
    }
}
