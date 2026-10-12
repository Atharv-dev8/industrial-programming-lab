import java.util.Scanner;

class WelcomeUserNullInitialized
{
    public static void main(String A[])
    {
       Scanner scanner = null;
       String sName =null;

       scanner = new Scanner(System.in);

       System.out.println("Enter Your Name : ");
       sName = scanner.nextLine();

       System.out.println("Welcome " +sName);

    }    
}

