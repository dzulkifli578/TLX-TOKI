import java.util.Scanner;

public class FloordanCeiling
{
    public static void main (String [] args)
    {
        Scanner scanner = new Scanner (System.in);

        float bilangan = 0;
        int floor_positif = 0, ceiling_positif = 0, floor_negatif = 0, ceiling_negatif = 0;

        String input = scanner.nextLine();
        bilangan = Float.parseFloat(input);

        scanner.close ();

        if (bilangan == (int) bilangan)
        {
            bilangan = (int) bilangan;
            System.out.printf ("%.0f %.0f", bilangan, bilangan);
        }
        else if (bilangan > 0)
        {
            floor_positif = (int) bilangan;
            ceiling_positif = floor_positif + 1;
            System.out.println(floor_positif + " " + ceiling_positif);
        }
        else if (bilangan < 0)
        {
            ceiling_negatif = (int) bilangan;
            floor_negatif = ceiling_negatif - 1;
            System.out.println(floor_negatif + " " + ceiling_negatif);
        }
    }    
}