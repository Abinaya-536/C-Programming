import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int genPass, genFare, acPass, acFare;
        int platform, maintenance, fuel;
        int netRevenue;

        genPass = sc.nextInt();
        genFare = sc.nextInt();
        acPass = sc.nextInt();
        acFare = sc.nextInt();
        platform = sc.nextInt();
        maintenance = sc.nextInt();
        fuel = sc.nextInt();

        netRevenue = (genPass * genFare) + (acPass * acFare)
                     + platform - maintenance - fuel;

        System.out.println("Net Railway Revenue = " + netRevenue);

        sc.close();
    }
}
