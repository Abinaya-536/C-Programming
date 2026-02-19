import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int days, rent, late, fuel, maintenance;
        int profit;

        days = sc.nextInt();
        rent = sc.nextInt();
        late = sc.nextInt();
        fuel = sc.nextInt();
        maintenance = sc.nextInt();

        profit = (days * rent) + late - fuel - maintenance;

        System.out.println("Net Profit = " + profit);

        sc.close();
    }
}
