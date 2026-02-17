import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

       
        double tuitionFees;
        double scholarshipPercent;
        double examFee;
        double libraryFee;
        double scholarshipAmount;
        double remainingFees;
        double finalPayableFee;

        tuitionFees = input.nextDouble();
        scholarshipPercent = input.nextDouble();
        examFee = input.nextDouble();
        libraryFee = input.nextDouble();

    
        scholarshipAmount = (tuitionFees * scholarshipPercent) / 100;

       
        remainingFees = tuitionFees - scholarshipAmount;
        finalPayableFee = remainingFees + examFee + libraryFee;

        System.out.println("Final Payable Fee = " + finalPayableFee);

        input.close();
    }
}
