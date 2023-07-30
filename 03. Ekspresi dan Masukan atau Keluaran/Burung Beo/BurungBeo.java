// mengimpor class Scanner dari library java.util
import java.util.Scanner;

// deklarasi class bernama BurungBeo
public class BurungBeo
{
    // titik awal eksekusi
    public static void main (String [] args) {
        {
            // membuat objek Scanner bernama scanner untuk membaca input
            Scanner scanner = new Scanner (System.in);

            String kalimat = scanner.nextLine ();

            // Menutup objek Scanner setelah selesai membaca input
            scanner.close ();
            
            // mencetak isi variabel kalimat
            System.out.print (kalimat);
        }
    }
}

