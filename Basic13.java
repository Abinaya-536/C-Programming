import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int yieldPerAcre;
        int acres;
        int extraYield;
        int damagedCrops;
        int finalYield;

        yieldPerAcre = sc.nextInt();
        acres = sc.nextInt();
        extraYield = sc.nextInt();
        damagedCrops = sc.nextInt();

        finalYield = (yieldPerAcre * acres) + extraYield - damagedCrops;

        System.out.println("Marketable Yield = " + finalYield);

        sc.close();
    }
}
