public class Array {
    public static void main(String a[]) {
        int nums[][] = new int[4][3];
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 3; j++) {
                nums[i][j] = (int) (Math.random() * 100);
                System.out.print(nums[i][j] + " ");
            }
            System.err.println();
        }
    }
}
