import java.util.Scanner;

public class BreakContinueExit
{
    public static void main (String [] args)
    {
        Scanner scanner = new Scanner (System.in);

        short bilangan = scanner.nextShort ();

        scanner.close ();

        for (short i = 1; i <= bilangan; i++)
        {
            if (i % 10 == 0)
            {
                continue;
            }

            if (i == 42)
            {
                System.out.print("ERROR");
                break;
            }

            System.out.println (i);
        }
    }
}