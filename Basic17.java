import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int hours, rate, design, testing, advance;
        int projectCost;

        hours = sc.nextInt();
        rate = sc.nextInt();
        design = sc.nextInt();
        testing = sc.nextInt();
        advance = sc.nextInt();

        projectCost = (hours * rate) + design + testing - advance;

        System.out.println("Final Project Cost = " + projectCost);

        sc.close();
    }
}
