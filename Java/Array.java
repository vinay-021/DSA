public class Array {
    public static void main(String[] args){
        int[] arr1 = {4,5,11,78,52,64};

        int [] arr2= new int[5];

        //get
        System.out.println(arr1[2]);

        //set
        arr2[2]=30;
        System.out.println(arr2[2]);
    
        //length
        System.out.println(arr1.length);

        //traverse
        for (int i = 0; i < arr1.length; i++) {
            System.out.print(arr1[i] + " ");
        }
    }

}
