import java.util.Scanner;

public class Largest_of_N_Numbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int maxValue = Integer.MIN_VALUE;
        for (int i = 1; i <= n; i++) {
            int current = sc.nextInt();
            maxValue = Math.max(maxValue, current);
        }
        System.out.println(maxValue);
        sc.close();
    }
}
