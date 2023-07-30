// mengimpor class Scanner dari library java.util
import java.util.Scanner;

// deklarasi class bernama LuasSegitiga
public class LuasSegitiga
{
    // titik awal eksekusi
    public static void main (String [] args)
    {
        // membuat objek Scanner bernama scanner untuk membaca input
        Scanner scanner = new Scanner (System.in);

        // input nilai variabel A dan T
        float A = scanner.nextFloat ();
        float T = scanner.nextFloat ();

        // menutup objek Scanner setelah selesai membaca input
        scanner.close ();
        
        // mencetak hasil luas segitiga dari variabel A dan T dengan 2 angka di belakang koma ke layar
        System.out.printf ("%.2f", A * T / 2);
    }
}