import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int ads, sponsor, affiliate, tax, production;
        int income;

        ads = sc.nextInt();
        sponsor = sc.nextInt();
        affiliate = sc.nextInt();
        tax = sc.nextInt();
        production = sc.nextInt();

        income = ads + sponsor + affiliate - tax - production;

        System.out.println("Final YouTube Income = " + income);

        sc.close();
    }
}
