import java.util.*;

public class ArrayLists {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();

        // Add
        list.add(10);
        list.add(20);
        list.add(30);
        System.out.println(list);

        //Add at a specific index
        list.add(1,40);
        System.out.println(list);

        //Get a specific element at a particular index
        System.out.println(list.get(2));

        //Set a element at a particular index
        list.set(2, 50);
        System.out.println(list);

        //Remove a element at a particular index
        list.remove(2);
        System.out.println(list);

        //Return Size of List
        System.out.println(list.size());
    }
}