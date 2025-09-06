import java.util.ArrayDeque;
import java.util.Queue;

public class Queue_Intro {
    public static void main(String[] args) {
        Queue<Integer> queue = new ArrayDeque<>();

        // add
        queue.offer(10);
        queue.offer(20);
        queue.offer(30);
        queue.offer(40);

        // peek
        System.out.println(queue.peek());

        // remove
        System.out.println(queue.remove());

        System.out.println(queue.peek());

        // size
        System.out.println(queue.size());
    }
}
