public class Search_in_LinkedList {
    public static class Node{
        int data;
        Node next;
        Node(int val){
            this.data=val;
        }
    }
    public static void main(String[] args) {
        Node n1=new Node(10);
        Node n2=new Node(20);
        Node n3=new Node(30);
        Node n4=new Node(40);
        Node n5=new Node(50);
        Node n6=new Node(60);

        n1.next=n2;
        n2.next=n3;
        n3.next=n4;
        n4.next=n5;
        n5.next=n6;

        Node head=n1;
        
        boolean result=Search_in_LL(head,45);
        System.out.println(result);
    }
    public static boolean Search_in_LL(Node head, int k){
        Node temp=head;
        while (temp!=null) {
            if(temp.data==k) return true;
            temp=temp.next;
        }
        return false;
    }
}
