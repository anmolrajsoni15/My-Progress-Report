import java.util.Scanner;

public class prog2 {
    public static void main(String[] args) {
        System.out.println("Taking user input");
        try (Scanner s = new Scanner(System.in)) {
            System.out.print("Enter first number ");
            int a = s.nextInt();
            System.out.print("Enter second number ");
            int b = s.nextInt();
            System.out.println("Which operation do you want to perform\n 1.Add\n 2.Subtract\n 3.Multiply\n 4.Divide");
            int ans = s.nextInt();
            if(ans == 1){
                System.out.print("\nYour answer is ");
                System.out.println(a+b);
            }
            else if(ans == 2){
                System.out.print("\nYour answer is ");
                System.out.println(a-b);
            }
            else if(ans == 3){
                System.out.print("\nYour answer is ");
                System.out.println(a*b);
            }
            else if(ans == 4){
                System.out.print("\nYour answer is ");
                System.out.println(a/b);
            }
        }

    }
}
