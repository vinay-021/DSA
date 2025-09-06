import java.util.LinkedList;

public class Queue_in_LinkedList {
    public static void main(String[] args) {
        LinkedList<Integer> queue=new LinkedList<>();

        queue.addLast(10);
        queue.addLast(20);
        queue.addLast(30);
        queue.addLast(40);
        queue.addLast(50);

        System.out.println(queue.removeFirst());
    }
}
