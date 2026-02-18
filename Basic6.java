import java.util.Scanner;

public class WeeklyWageCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int daysWorked = sc.nextInt();
        int wagePerDay = sc.nextInt();
        int overtimeBonus = sc.nextInt();
        int maintenanceCharge = sc.nextInt();

        int baseSalary = daysWorked * wagePerDay;
        int finalWage = baseSalary + overtimeBonus - maintenanceCharge;

        System.out.println("Final Weekly Wage = " + finalWage);
    }
}
