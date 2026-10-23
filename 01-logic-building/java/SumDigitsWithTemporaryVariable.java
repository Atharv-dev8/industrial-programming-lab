//take digit from user and perform addition on it

import java.util.Scanner;

class Digit
{
    public int SumDigit(int iNo)
    {
        int iDigit = 0;
         int iSum =0;

         if(iNo<0)
         {
            iNo =-iNo;
         }

         while(iNo!=0)
        {
            iDigit = iNo % 10;
            iSum += iDigit;
            iNo = iNo/10;                       
            
        }
        return iSum;
    }
}

class SumDigitsWithTemporaryVariable
{

    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iRet =0;

        Digit digit = new Digit();

        System.out.println("Enter No : ");

        int iValue =scanner.nextInt();
        
        iRet = digit.SumDigit(iValue);

        System.out.println("Summation Of Digit is : "+iRet);
    }
}

