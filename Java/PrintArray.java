public class PrintArray {
    public static void main(String[] args) {
        int[] arr = { 2, 3, 4, 5, 7, 1, 24, 64 };
        PrintArray(arr, 0);
    }

    public static void PrintArray(int[] arr, int i) {
        if (i == arr.length) {
            return;
        }
        System.out.print(arr[i] + " ");
        PrintArray(arr, i + 1);
    }
}