// mengimpor class Scanner dari library java.util
import java.util.Scanner;

// deklarasi class bernama AtambahB
public class AtambahB
{
    // titik awal eksekusi
    public static void main (String [] args)
    {
        // membuat objek Scanner bernama scanner untuk membaca input
        Scanner scanner = new Scanner (System.in);

        // input nilai variabel A dan B dari layar
        short A = scanner.nextShort ();
        short B = scanner.nextShort ();

        // Menutup objek Scanner setelah selesai membaca input
        scanner.close ();
        
        // mencetak output ke layar dengan menjumlahkan nilai variabel A dan B
        System.out.println (A + B);
    }
}