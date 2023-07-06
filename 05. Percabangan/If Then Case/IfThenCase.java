import java.util.Scanner;

public class IfThenCase
{
    public static void main(String [] args) 
    {
        Scanner scanner = new Scanner (System.in);
        
        int bilangan = scanner.nextInt ();

        scanner.close ();

        if (bilangan > 0 && bilangan < 10)
        {
            System.out.print ("satuan");
        }
        else if (bilangan < 100)
        {
            System.out.print ("puluhan");
        }
        else if (bilangan < 1000)
        {
            System.out.print ("ratusan");
        }
        else if (bilangan < 10000)
        {
            System.out.print ("ribuan");
        }
        else if (bilangan < 100000)
        {
            System.out.print ("puluhribuan");
        }
    }
}
