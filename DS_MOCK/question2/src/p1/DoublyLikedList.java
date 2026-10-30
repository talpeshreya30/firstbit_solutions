package p1;

public class DoublyLikedList {
	Node head,tail;
	
	public void insertAtBeginning(int data) {
		Node newNode=new Node(data);
				if (head==null) {
					head=tail=newNode;
				}else {
					newNode.next=head;
					head.prev=newNode;
					head=newNode;
				}
	}
	
	public void insertAtEnd(int data) {
		Node newNode=new Node(data);
				if (tail==null) {
					head=tail=newNode;
				}else {
					tail.prev=newNode;
					newNode.next=tail;
					tail=newNode;
				}
	}
	
	public void deleteFromBeginning() {
		if (head==null) {
			System.out.println("List is Empty");
			return;
		}
		
		if (head==tail) {
			head=tail=null;
		}else {
			head=head.next;
			head.prev=null;
		}
	}
	
	public void display() {
		Node temp=head;
		
		if (temp!=null) {
			System.out.println(temp.data + "-");
			temp=temp.next;
		}
		
		System.out.println("Null");
	}
}
	
