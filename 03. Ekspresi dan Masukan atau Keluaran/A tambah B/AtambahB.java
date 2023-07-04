import java.util.Scanner;

public class AtambahB
{
    public static void main (String [] args)
    {
        Scanner scanner = new Scanner (System.in);

        short A = scanner.nextShort ();
        short B = scanner.nextShort ();

        scanner.close ();
        
        System.out.println (A + B);
    }
}