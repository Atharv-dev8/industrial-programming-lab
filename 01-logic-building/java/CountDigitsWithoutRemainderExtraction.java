import java.util.Scanner;

class Digit
{
    public int CountDigits(int iNo)
    {
         int iCount =0;

         if(iNo<0)
         {
            iNo =-iNo;
         }

         while(iNo!=0)
        {
          
            iNo = iNo/10;                       
            iCount++;
        }
        return iCount;
    }
}

class CountDigitsWithoutRemainderExtraction
{

    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iRet =0;

        Digit digit = new Digit();

        System.out.println("Enter No : ");

        int iValue =scanner.nextInt();
        
        iRet = digit.CountDigits(iValue);

        System.out.println("No Of Digits: "+iRet);
    }
}

