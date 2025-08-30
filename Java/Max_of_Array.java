import java.util.*;

public class Max_of_Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int[] arr = new int[x];
        int max = Integer.MIN_VALUE;

        for (int i = 0; i < x; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        System.out.println(max);
        sc.close();
    }
}
