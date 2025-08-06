/* Read two arrays from the user and generate a third array containing all the elements from the first two. */

import java.util.Scanner;

public class Array_Problem02 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n1= sc.nextInt();
        int n2= sc.nextInt();
        int[] arr1=new int[n1];
        int[] arr2=new int[n2];
        for(int i=0;i<n1;i++){
            arr1[i]=sc.nextInt();
        }for(int j=0;j<n2;j++){
            arr2[j]=sc.nextInt();
        }

        int[] arr3=new int[n1 + n2];
        for(int i=0;i<n1;i++){
            arr3[i]=arr1[i];
        }for(int j=0;j<n2;j++){
            arr3[ n1 + j]=arr2[j];
        }
        for(int k=0;k<(n1+n2);k++){
            System.out.println(arr3[k]);
        }
    }
}
