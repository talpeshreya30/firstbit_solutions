package p1;

import java.util.HashSet;
import java.util.Set;

public class Graph {
	Set<GraphNode> visited=new HashSet<>();
	
	public void dfs(GraphNode node) {
		if (node==null || visited.contains(node)) {
			return;
		}
		
		visited.add(node);
		System.out.println(node.data + " ");
		
		for(GraphNode neighbour : node.neighbours) {
			dfs(neighbour);
		}
	}
}