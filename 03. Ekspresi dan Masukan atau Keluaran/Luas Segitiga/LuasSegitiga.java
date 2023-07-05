import java.util.Scanner;

public class LuasSegitiga
{
    public static void main (String [] args)
    {
        Scanner scanner = new Scanner (System.in);

        float A = scanner.nextFloat ();
        float T = scanner.nextFloat ();

        scanner.close ();
        
        float luas_segitiga = A * T / 2;

        System.out.printf ("%.2f", luas_segitiga);
    }
}