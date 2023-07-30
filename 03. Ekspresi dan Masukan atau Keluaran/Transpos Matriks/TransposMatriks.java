// mengimpor class Scanner dari library java.util
import java.util.Scanner;

// deklarasi class bernama TransposMatriks
public class TransposMatriks
{
    // titik awal eksekusi
    public static void main (String [] args)
    {
        // membuat objek Scanner bernama scanner untuk membaca input
        Scanner scanner = new Scanner (System.in);

        // input nilai variabel a dari layar
        byte a = scanner.nextByte ();
        // input nilai variabel b dari layar
        byte b = scanner.nextByte ();
        // input nilai variabel c dari layar
        byte c = scanner.nextByte ();
        // input nilai variabel d dari layar
        byte d = scanner.nextByte ();
        // input nilai variabel e dari layar
        byte e = scanner.nextByte ();
        // input nilai variabel f dari layar
        byte f = scanner.nextByte ();
        // input nilai variabel g dari layar
        byte g = scanner.nextByte ();
        // input nilai variabel h dari layar
        byte h = scanner.nextByte ();
        // input nilai variabel i dari layar
        byte i = scanner.nextByte ();

        // Menutup objek Scanner setelah selesai membaca input
        scanner.close ();

        // mencetak isi variabel a, d, g ke layar
        System.out.println(a + " " + d + " " + g);
        // mencetak isi variabel b, e, h ke layar
        System.out.println(b + " " + e + " " + h);
        // mencetak isi variabel c, f, i ke layar
        System.out.println(c + " " + f + " " + i);
    }
}