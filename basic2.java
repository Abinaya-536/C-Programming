import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        double baseCost, extraGB, ratePerGB, tax;
        double totalBill;

        baseCost = sc.nextDouble();
        extraGB = sc.nextDouble();
        ratePerGB = sc.nextDouble();
        tax = sc.nextDouble();

        double extraCharge = extraGB * ratePerGB;

       
        double total = baseCost + extraCharge;

    
        totalBill = total + (total * tax / 100);
        System.out.println("Total Bill = " + totalBill);

        sc.close();
    }
}
