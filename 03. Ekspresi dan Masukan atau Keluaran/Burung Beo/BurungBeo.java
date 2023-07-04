import java.util.Scanner;

public class BurungBeo
{
    public static void main (String [] args) {
        {
            Scanner scanner = new Scanner (System.in);

            String kalimat = scanner.nextLine ();

            scanner.close ();
            
            System.out.print (kalimat);
        }
    }
}
