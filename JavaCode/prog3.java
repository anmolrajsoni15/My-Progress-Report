import java.util.Scanner;
public class prog3 {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Full Marks ");
            sc.nextInt();
            System.out.println("\nEnter your scores:-");
            System.out.print("English: ");
            int English = sc.nextInt();
            System.out.print("Hindi: ");
            int Hindi = sc.nextInt();
            System.out.print("Maths: ");
            int Maths = sc.nextInt();
            System.out.print("SocialSci: ");
            int SocialSci = sc.nextInt();
            System.out.print("Science: ");
            int Science = sc.nextInt();

            int total = English + Hindi + Maths + SocialSci + Science;
            float percentage = ((total/(500.00f))*100);
            System.out.printf("\nYou have scored %.2f", percentage);
        }
    }
}
