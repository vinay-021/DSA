import java.util.Stack;

public class Stack_Intro {
    public static void main(String[] args) {
        Stack<Integer> st = new Stack<>();

        // add
        st.add(10);
        st.add(20);
        st.add(30);
        st.add(40);
        st.add(50);
        st.add(60);

        // peek
        System.out.println(st.peek());
        
        // pop
        System.out.println(st.pop());
        
        //peek
        System.out.println(st.peek());
        
        // size
        System.out.println(st.size());
    }
}
