import java.util.Scanner;

class Arithmatic
{
     public static int Addition(                               
                            int ino1,
                            int ino2
                        )
    {
        int iAns = 0;

        iAns = ino1+ino2;       //bussiness logic
        return iAns;
    }
}

class AdditionStaticMethodSeparateClassError
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

       iAns = Addition(iValue1,iValue2);        //error              

       System.out.println("Addition is : "+iAns);
  

    }    
}

