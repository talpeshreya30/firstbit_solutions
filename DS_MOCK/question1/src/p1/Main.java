package p1;

public class Main {

	public static void main(String[] args) {
		Node head1=new Node(10);
		head1.next=new Node(20);
		head1.next.next=new Node(30);
		
		Node head2=new Node(10);
		head2.next=new Node(20);
		head2.next.next=new Node(30);
		
			ListCheck check=new ListCheck();
			
			if (check.areEqual(head1, head2)) {
				System.out.println("Matching");
			}else {
				System.out.println("Not Matching");
			}
	}

}
