import java.util.Scanner;

public class DeliveryServiceEarnings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

    
        int deliveries;
        int payoutPerDelivery;
        int incentive;
        int fuelCost;
        int netEarnings;

     
        deliveries = sc.nextInt();
        payoutPerDelivery = sc.nextInt();
        incentive = sc.nextInt();
        fuelCost = sc.nextInt();

       
        netEarnings = (deliveries * payoutPerDelivery) + incentive - fuelCost;

      
        System.out.println("Driver Earnings = " + netEarnings);

        sc.close();
    }
}
