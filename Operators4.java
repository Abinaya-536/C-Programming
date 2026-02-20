import java.util.Scanner;

public class CreditCard {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int limit = sc.nextInt();     
        int amount = sc.nextInt();     
        int blocked = sc.nextInt();   

        if (amount <= limit && blocked == 0) {
            System.out.println("Approved");
        } else {
            System.out.println("Declined");
        }

        sc.close();
    }
}