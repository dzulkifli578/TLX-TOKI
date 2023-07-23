import java.util.Scanner;

public class PolaIII
{
    public static void main (String [] args)
    {
        Scanner scanner = new Scanner (System.in);

        short angka = 0;

        short bilangan = scanner.nextShort ();

        scanner.close ();

        for (short i = 1; i <= bilangan; i++)
        {
            for (short j = 1; j <= i; j++)
            {
                System.out.print (angka);
                angka++;

                if (angka == 10)
                {
                    angka = 0;
                }
            }

            System.out.println ();
        }
    }
}
