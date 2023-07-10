import java.util.Scanner;

public class FaktorBilangan
{
    public static void main (String [] args)
    {
        Scanner scanner = new Scanner (System.in);

        int bilangan = scanner.nextInt ();

        scanner.close ();

        for (int i = bilangan; i >= 1; i--)
        {
            if (bilangan % i == 0)
            {
                System.out.println (i);
            }
        }
    }
}
