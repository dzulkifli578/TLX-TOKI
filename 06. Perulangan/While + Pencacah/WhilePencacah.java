import java.util.Scanner;

public class WhilePencacah
{
    public static void main (String [] args)
    {
        Scanner scanner = new Scanner (System.in);
    
        short masukan = 0, keluaran = 0;

        while (scanner.hasNextShort())
        {
            masukan = scanner.nextShort();
            keluaran += masukan;
        }

        scanner.close ();

        System.out.print (keluaran);
    }
}
