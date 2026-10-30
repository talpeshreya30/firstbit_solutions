package p1;
import java.util.ArrayList;

public class GraphNode {
	int data;
	ArrayList<GraphNode> neighbours;
	
	public GraphNode(int data) {
		this.data=data;
		neighbours=new ArrayList<>();
	}
	
	public void addNeighbour(GraphNode node) {
		neighbours.add(node);
	}
}
