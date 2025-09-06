public class add_First_LinkedList {

    public static class Node {
        int data;
        Node next;

        Node(int val) {
            this.data = val;
        }
    }

    public static void main(String[] args) {
        Node n1 = new Node(10);
        Node n2 = new Node(20);
        Node n3 = new Node(30);
        Node n4 = new Node(40);
        Node n5 = new Node(50);

        n1.next = n2;
        n2.next = n3;
        n3.next = n4;
        n4.next = n5;

        Node head = n1;

        head = addFirst(head, 60);

        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }

    public static Node addFirst(Node head, int val) {
        Node n = new Node(val);

        n.next = head;
        head = n;

        return head;
    }
}
