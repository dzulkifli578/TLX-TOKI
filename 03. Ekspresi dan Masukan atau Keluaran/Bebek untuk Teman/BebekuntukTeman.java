import java.util.Scanner;

public class BebekuntukTeman
{
    public static void main (String [] args)
    {
        Scanner scanner = new Scanner (System.in);

        int bebek = scanner.nextInt ();
        int bagi = scanner.nextInt ();

        scanner.close ();

        System.out.println("masing-masing " + (bebek / bagi));
        System.out.println("bersisa " + (bebek % bagi));
    }
}