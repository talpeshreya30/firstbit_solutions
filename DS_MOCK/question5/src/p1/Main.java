package p1;

public class Main {

	public static void main(String[] args) {
		GraphNode n1= new GraphNode(1);
		GraphNode n2= new GraphNode(2);
		GraphNode n3= new GraphNode(3);
		GraphNode n4= new GraphNode(4);
		GraphNode n5= new GraphNode(5);
		GraphNode n6= new GraphNode(6);
		
		System.out.println("Tree Printed");
		
		n1.addNeighbour(n2);
		n1.addNeighbour(n3);
		
		n2.addNeighbour(n1);
		n2.addNeighbour(n4);
		n2.addNeighbour(n5);
		
		n3.addNeighbour(n1);
		n3.addNeighbour(n6);
		
		n4.addNeighbour(n2);
		n5.addNeighbour(n2);
		n6.addNeighbour(n3);
		
		Graph g=new Graph();
		System.out.println("DFS Traversal:");
		g.dfs(n1);
		System.out.println();
	}

}
