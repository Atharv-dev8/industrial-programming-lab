import java.util.Scanner;

class Digit
{
    public void DisplayDigits()
    {
         int iNo = 9752;
         int iDigit  =0;

        
        while(iNo!=0)
        {
            iDigit = iNo % 10;    
            iNo = iNo/10;                       
            System.out.println(iDigit); 
        }

       
    }
}

class DisplayDigitsWithTemporaryVariable
{

    public static void main(String A[])
    {
        Digit digit = new Digit();
        digit.DisplayDigits();
    }
}

