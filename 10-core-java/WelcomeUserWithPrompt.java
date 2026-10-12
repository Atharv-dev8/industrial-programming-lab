import java.util.Scanner;

class WelcomeUserWithPrompt 
{
    public static void main(String A[])
    {
       Scanner scanner = new Scanner(System.in);

       System.out.println("Enter Your Name : ");
       String sName = scanner.nextLine();

       System.out.println("Welcome " +sName);

    }    
}

