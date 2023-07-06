import java.util.Scanner;

public class IfThen
{
    public static void main(String [] args)
    {
        Scanner scanner = new Scanner (System.in);

        int bilangan = scanner.nextInt ();

        scanner.close ();

        if (bilangan >= 0)
        {
            System.out.print (bilangan);
        }
    }
}
