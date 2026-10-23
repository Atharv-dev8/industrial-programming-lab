import java.util.Scanner;

class Digit
{
    public void DisplayDigits()
    {
         int iNo = 175902;

        
        while(iNo!=0)
        {
            System.out.println("Digit Is : "+(iNo % 10));       
            iNo = iNo/10;                       
            System.out.println("Number is : "+iNo); 
        }

       
    }
}

class DisplayDigitsUsingWhileLoop
{

    public static void main(String A[])
    {
        Digit digit = new Digit();
        digit.DisplayDigits();
    }
}

