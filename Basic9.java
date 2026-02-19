import java.util.Scanner;

public class HospitalBillEstimator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int roomChargePerDay;
        int days;
        int medicineCost;
        int labFees;
        int insuranceCoverage;
        int finalBill;

      
        roomChargePerDay = sc.nextInt();
        days = sc.nextInt();
        medicineCost = sc.nextInt();
        labFees = sc.nextInt();
        insuranceCoverage = sc.nextInt();

      
        finalBill = (roomChargePerDay * days) + medicineCost + labFees - insuranceCoverage;

    
        System.out.println("Payable Amount = " + finalBill);

        sc.close();
    }
}
