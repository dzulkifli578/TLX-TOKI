import java.util.Scanner;

public class IfThenElse
{
    public static void main(String [] args)
    {
        Scanner scanner = new Scanner (System.in);

        int bilangan = scanner.nextInt ();

        scanner.close ();

        if (bilangan > 0)
        {
            System.out.println("positif");
        }
        else if (bilangan == 0)
        {
            System.out.println("nol");
        }
        else if (bilangan < 0)
        {
            System.out.println("negatif");
        }
   }    
}
