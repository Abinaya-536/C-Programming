import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int baseSalary;
        int sessions;
        int payPerSession;
        int bonus;
        int maintenanceFee;
        int finalSalary;

        baseSalary = sc.nextInt();
        sessions = sc.nextInt();
        payPerSession = sc.nextInt();
        bonus = sc.nextInt();
        maintenanceFee = sc.nextInt();

        finalSalary = baseSalary + (sessions * payPerSession) + bonus - maintenanceFee;

        System.out.println("Final Salary = " + finalSalary);

        sc.close();
    }
}
