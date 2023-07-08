import java.util.Scanner;

public class While
{
    public static void main (String [] args)
    {
        Scanner scanner = new Scanner (System.in);

        String masukan;

        while ((masukan = scanner.nextLine()) != null)
        {
            System.out.println (masukan);    
        }

        scanner.close ();
    }
}