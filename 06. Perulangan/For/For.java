import java.util.Scanner;

public class For
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner (System.in);

        short kandang_bebek = 0, bebek = 0, jumlah_bebek = 0;

        kandang_bebek = scanner.nextShort ();

        for (short i = 1; i <= kandang_bebek; i++)
        {
            bebek = scanner.nextShort ();
            jumlah_bebek += bebek;
        }

        System.out.print (jumlah_bebek);
    }
}