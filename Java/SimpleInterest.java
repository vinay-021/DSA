import java.util.Scanner;

public class SimpleInterest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // si=p*r*t/100
        int p = sc.nextInt();
        int r = sc.nextInt();
        int t = sc.nextInt();
        int si = (p * r * t) / 100;
        System.out.println("Simple Interest = " + si);
        sc.close();
    }
}
