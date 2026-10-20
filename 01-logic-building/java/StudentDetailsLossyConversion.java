import java.util.Scanner;

class StudentDetailsLossyConversion
{
    public static void main(String A[])
    {
       Scanner scanner = null;
       String sName =null;
       float fMarks = 0.0;      //error due to loosy conversion
       int iAge = 0;


       scanner = new Scanner(System.in);

       System.out.println("Enter Your Name : ");
       sName = scanner.next();

       System.out.println("Enter Your Age : ");
       iAge  = scanner.nextInt();

       System.out.println("Enter Your Marks");
       fMarks = scanner.nextFloat();

       System.out.println("Welcome " +sName);
       System.out.println("your age is : "+iAge);
       System.out.println("your marks : "+fMarks);

    }    
}

