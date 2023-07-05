import java.util.Scanner;

public class LuasSegitiga
{
    public static void main (String [] args)
    {
        Scanner scanner = new Scanner (System.in);

        float A = scanner.nextFloat ();
        float T = scanner.nextFloat ();

        scanner.close ();
        
        System.out.printf ("%.2f", A * T / 2);
    }
}