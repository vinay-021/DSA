
/* Given an integer N, generate & print an array containing squares of all Numbers from 1 to N */
import java.util.Scanner;

public class Array_Problem01 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int x = 1;
        for (int i = 0; i < n; i++) {
            arr[i] = x * x;
            x++;
        }
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
        sc.close();
    }
}
