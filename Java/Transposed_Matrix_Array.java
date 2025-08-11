import java.util.Scanner;

public class Transposed_Matrix_Array {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the size of rows : ");
        int x = sc.nextInt();
        
        System.out.print("Enter the size of columns : ");
        int y = sc.nextInt();

        int[][] arr = new int[x][y];
        System.out.print("Enter the elements of array : ");

        for (int i = 0; i < arr.length; i++) { // can use x in place of arr.length
            for (int j = 0; j < arr[0].length; j++) { // can use y in place of arr[0].length
                arr[i][j] = sc.nextInt();
            }
        }

        int[][] transpose = new int[y][x];
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                transpose[j][i] = arr[i][j];
            }
        }
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                System.out.print(transpose[i][j] + " ");
            }
            System.out.println();
        }

        sc.close();
    }

}

/*
 * 
 * public class Transposed_Matrix_Array {
 * public static void main(String[] args) {
 * Scanner sc = new Scanner(System.in);
 * System.out.print("Enter the size of rows : ");
 * int x = sc.nextInt();
 * System.out.print("Enter the size of columns : ");
 * int y = sc.nextInt();
 * 
 * int[][] arr = new int[x][y];
 * System.out.print("Enter the elements of array : ");
 * 
 * for (int a = 0; a < arr.length; a++) { // can use x in place of arr.length
 * for (int b = 0; b < arr[0].length; b++) { // can use y in place of arr[0].length
 * arr[a][b] = sc.nextInt();
 * }
 * }
 * 
 * for (int i = 0; i < arr.length; i++) {
 * for (int j = 0; j < i; j++) {
 * int temp = arr[i][j];
 * arr[i][j] = arr[j][i];
 * arr[j][i] = temp;
 * }
 * }
 * for (int a = 0; a < arr.length; a++) { // can use x in place of arr.length
 * for (int b = 0; b < arr[0].length; b++) { // can use y in place of arr[0].length
 * System.out.print(arr[a][b] + " ");
 * }
 * System.out.println();
 * }
 * 
 * sc.close();
 * }
 * 
 * }
 * 
 */