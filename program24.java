import java.util.Scanner;

class program23
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        String sName = null;
        
        
        scanner = new Scanner(System.in);

        System.out.println("Enter Your name : ");
        sName = scanner.next();

        System.out.println("Welcome "+sName);


    }
}