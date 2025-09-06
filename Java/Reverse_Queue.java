import java.util.ArrayDeque;
import java.util.Queue;
import java.util.Stack;

public class Reverse_Queue {
    public static void main(String[] args){
        Queue<Integer> queue=new ArrayDeque<>();

        queue.offer(10);
        queue.offer(20);
        queue.offer(30);
        queue.offer(40);
        queue.offer(50);
        queue.offer(60);
        queue.offer(70);

        reverse(queue, 3);
    }

    public static void reverse(Queue<Integer> queue, int k){
        Stack<Integer> stack=new Stack<>();

        for (int i = 0; i < k; i++) {
            stack.push(queue.remove());
        }

        for (int i = 0; i < k; i++) {
            queue.offer(stack.pop());
        }

        int count=queue.size()-k;

        for (int i = 0; i < count; i++) {
            queue.offer(queue.remove());
        }

        System.out.println(queue);
    }
}
