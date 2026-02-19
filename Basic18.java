import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int registration, sponsorship, stall;
        int stage, celebrity, marketing;
        int remainingFund;

        registration = sc.nextInt();
        sponsorship = sc.nextInt();
        stall = sc.nextInt();
        stage = sc.nextInt();
        celebrity = sc.nextInt();
        marketing = sc.nextInt();

        remainingFund = registration + sponsorship + stall
                        - stage - celebrity - marketing;

        System.out.println("Remaining Fund = " + remainingFund);

        sc.close();
    }
}
