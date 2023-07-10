import java.util.Scanner;

public class DuaPangkat
{
    public static void main (String [] args)
    {
        Scanner scanner = new Scanner (System.in);

        int bilangan = scanner.nextInt ();

        scanner.close ();
        
        while (bilangan % 2 == 0)
        {
            bilangan /= 2;
        }

        if (bilangan == 1)
        {
            System.out.print ("ya");
        }
        else
        {
            System.out.print ("bukan");
        }
    }
}