class Solution {
  public:
    bool isNegativeWeightCycle(int V, vector<vector<int>>& edges) {
        // Step 1: Initialize distances from source to all vertices as infinity (or a large number).
        // Using 1e8 to prevent integer overflow during addition.
        vector<int> dist(V, 1e8);

        // Since the graph might be disconnected, we can assume a virtual source 
        // that connects to all vertices, or simply initialize the distance of vertex 0 to 0.
        dist[0] = 0;

        // Step 2: Relax all edges V - 1 times.
        // A shortest path in a graph without negative cycles can have at most V - 1 edges.
        for (int i = 0; i < V - 1; i++) {
            for (auto& edge : edges) {
                int u = edge[0];
                int v = edge[1];
                int weight = edge[2];

                if (dist[u] != 1e8 && dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                }
            }
        }

        // Step 3: Check for negative weight cycle.
        // If we can still get a shorter path, a negative cycle exists.
        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int weight = edge[2];

            if (dist[u] != 1e8 && dist[u] + weight < dist[v]) {
                return true; // Negative cycle detected
            }
        }

        return false; // No negative cycle found
    }
};
