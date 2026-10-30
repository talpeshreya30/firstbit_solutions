package p1;

public class Main {

	public static void main(String[] args) {
		DoublyLikedList list=new DoublyLikedList();
		
		list.insertAtBeginning(20);
		list.insertAtBeginning(10);
		list.insertAtEnd(30);
		
		list.display();
		list.deleteFromBeginning();
		list.display();
	}

}
