// ditto same as Articulation points code
void bridgeDFS(int node,
               int parent,
               int &timer,
               vector<int> &disc,
               vector<int> &low,
               unordered_map<int, bool> &visited,
               unordered_map<int, list<int>> &AdjList,
               vector<vector<int>> &result)
{
    visited[node] = true;
    disc[node] = low[node] = ++timer;

    for (int neighbour : AdjList[node]) {
        if (neighbour == parent) {
            // skip the edge back to parent
            continue;
        }
        if (!visited[neighbour]) {
            // tree‑edge
            bridgeDFS(neighbour, node, timer, disc, low, visited, AdjList, result);
            low[node] = min(low[node], low[neighbour]);

            // bridge condition:
            // if the subtree rooted at `neighbour` cannot reach back above `node`
            if (low[neighbour] > disc[node]) {
                result.push_back({ node, neighbour });          /////// only change 
            }
        } else {
            // back‑edge
            low[node] = min(low[node], disc[neighbour]);
        }
    }
}

// Finds all bridges in an undirected graph.
// edges : list of m edges, each as {u, v} (0-based vertices)
// Returns a vector of bridges, each as a two‑element vector {u, v}
vector<vector<int>> findBridges(const vector<vector<int>> &edges, int n, int m)
{
    unordered_map<int, list<int>> AdjList;
    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }
	
    vector<int> disc(n, -1), low(n, -1);
    unordered_map<int, bool> visited;
    int timer = 0; 
	
    vector<vector<int>> result;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            bridgeDFS(i, -1, timer, disc, low, visited, AdjList, result);
        }
    }

    return result;
}
