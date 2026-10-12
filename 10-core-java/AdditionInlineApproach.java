import java.util.Scanner;

//approach 1

class AdditionInlineApproach
{
    public static void main(String A[])
    {
       Scanner scanner = null;
       int iValue1 =0, iValue2=0,iAns=0;

       scanner = new Scanner(System.in);

       System.out.println("Enter firest number : ");
       iValue1 = scanner.nextInt();

       System.out.println("Enter second number : ");
       iValue2 = scanner.nextInt();

       iAns = iValue1+iValue2;

       System.out.println("Addition is : "+iAns);
  

    }    
}

