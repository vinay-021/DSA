/* Rotate 2D Array clockwise 90 degrees */

import java.util.Scanner;

public class Rotate_2D_Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        int cols = sc.nextInt();
        int[][] arr = new int[rows][cols];

        // Getting input from user
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        // If matrix is squared
        if (rows == cols) {

            // Step 1: Transposing matrix
            for (int i = 0; i < arr.length; i++) {
                for (int j = 0; j < i; j++) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[j][i];
                    arr[j][i] = temp;
                }
            }

            // Step 2: Row Reversal
            for (int i = 0; i < arr.length; i++) {
                int start = 0;
                int end = arr[i].length - 1;
                while (start < end) {
                    int temp = arr[i][start];
                    arr[i][start] = arr[i][end];
                    arr[i][end] = temp;
                    start++;
                    end--;
                }
            }
        } 
        // Else if matrix is rectangular
        else {
            int[][] rotated = new int[cols][rows];
            for (int i = 0; i < rotated.length; i++) {
                for (int j = 0; j < rotated[i].length; j++) {
                    rotated[i][j] = arr[rows - j - 1][i];
                }
            }
            arr = rotated;
        }

        // Printing the Rotated array
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

    }
}
/*
 * // Works excellent but only for square matrices
 * 
 * public class Rotate_2D_Array {
 * public static void main(String[] args) {
 * Scanner sc = new Scanner(System.in);
 * int rows = sc.nextInt();
 * int cols = sc.nextInt();
 * int[][] arr = new int[rows][cols];
 * 
 * // Getting input from user
 * for (int i = 0; i < arr.length; i++) {
 * for (int j = 0; j < arr[i].length; j++) {
 * arr[i][j] = sc.nextInt();
 * }
 * }
 * 
 * // Step 1: Transposing matrix
 * for (int i = 0; i < arr.length; i++) {
 * for (int j = 0; j < i; j++) {
 * int temp = arr[i][j];
 * arr[i][j] = arr[j][i];
 * arr[j][i] = temp;
 * }
 * }
 * 
 * // Step 2: Row Reversal
 * for (int i = 0; i < arr.length; i++) {
 * int start = 0;
 * int end = arr[i].length - 1;
 * while (start < end) {
 * int temp = arr[i][start];
 * arr[i][start] = arr[i][end];
 * arr[i][end] = temp;
 * start++;
 * end--;
 * }
 * }
 * 
 * // Printing the Rotated array
 * for (int i = 0; i < arr.length; i++) {
 * for (int j = 0; j < arr[i].length; j++) {
 * System.out.print(arr[i][j] + " ");
 * }
 * System.out.println();
 * }
 * 
 * }
 * }
 */