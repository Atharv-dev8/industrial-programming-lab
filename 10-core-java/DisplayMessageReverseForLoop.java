class Iteration
{
      public  void Display()
      {

          int iCnt =0;
          for(iCnt=6;iCnt>=1;iCnt--)      //infinite loop
          {
            System.out.println("Jay Ganesh.....");
          }
      }
}



class DisplayMessageReverseForLoop
{

    public static void main(String A[])
    {
      Iteration iteration = new Iteration();
      
      iteration.Display();
    }
}
