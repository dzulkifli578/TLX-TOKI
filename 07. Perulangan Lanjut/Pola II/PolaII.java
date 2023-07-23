import java.util.Scanner;

public class PolaII
{
    public static void main (String [] args)
    {
        Scanner scanner = new Scanner (System.in);

        short bilangan = scanner.nextShort ();

        scanner.close ();

        for (short i = 1; i <= bilangan; i++)
        {
            for (short j = 1; j <= bilangan - i; j++)
            {
                System.out.print (" ");
            }

            for (short j = 1; j <= i; j++)
            {
                System.out.print ("*");
            }

            System.out.println ();
        }
    }
}