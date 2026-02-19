import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int rooms;
        int price;
        int serviceCharges;
        int commission;
        int totalRevenue;

        rooms = sc.nextInt();
        price = sc.nextInt();
        serviceCharges = sc.nextInt();
        commission = sc.nextInt();

        totalRevenue = (rooms * price) + serviceCharges - commission;

        System.out.println("Total Revenue = " + totalRevenue);

        sc.close();
    }
}
