import java.util.*;

class WelcomeUserUsingScanner 
{
    public static void main(String A[])
    {
       Scanner sobj = new Scanner(System.in);

       String name = sobj.nextLine();

       System.out.println("Welcome " +name);

    }    
}

