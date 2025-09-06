import java.util.LinkedList;

public class Stack_in_LikedList {
    public static void main(String[] args) {
        LinkedList<Integer> stack=new LinkedList<>();

        // addFirst is defined in add_First_LinkedList.java file
        stack.addFirst(10);
        stack.addFirst(20);
        stack.addFirst(30);
        stack.addFirst(40);
        stack.addFirst(50);

        // removeFirst is defined in remove_First_LinkedList.java file
        System.out.println(stack.removeFirst());
        
    }
}
