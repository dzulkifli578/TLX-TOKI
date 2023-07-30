// mengimpor class Scanner dari library java.util
import java.util.Scanner;

// deklarasi class bernama HaloDunia
public class BebekuntukTeman
{
    // Titik awal eksekusi
    public static void main (String [] args)
    {
        // membuat objek Scanner bernama scanner untuk membaca input
        Scanner scanner = new Scanner (System.in);

        // meminta user memasukkan jumlah bebek dan jumlah teman
        int bebek = scanner.nextInt ();
        int teman = scanner.nextInt ();

        // Menutup objek Scanner setelah selesai membaca input
        scanner.close ();

        // menghitung berapa banyak bebek yang didapat masing-masing
        System.out.println("masing-masing " + (bebek / teman));
        // menghitung sisa bebek setelah dibagi rata
        System.out.println("bersisa " + (bebek % teman));
    }
}

