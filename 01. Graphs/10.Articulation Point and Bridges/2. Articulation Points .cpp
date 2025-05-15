#include <bits/stdc++.h>
using namespace std;

// DFS helper that marks articulation points in `ap`
void apDFS(int node,
           int parent,
           int &timer,
           vector<int> &disc,
           vector<int> &low,
           unordered_map<int, bool> &visited,
           unordered_map<int, list<int>> &AdjList,
           vector<int> &ap)
{
    visited[node] = true;
    disc[node] = low[node] = ++timer;
    int children = 0;

    for (int neighbour : AdjList[node]) {
        if (neighbour == parent) {
            // don't go back to the parent
            continue;
        }
        if (!visited[neighbour]) {
            // tree‑edge
            apDFS(neighbour, node, timer, disc, low, visited, AdjList, ap);
            children++;
            low[node] = min(low[node], low[neighbour]);

            if (parent != -1 && low[neighbour] >= disc[node]) {
                ap[node] = 1;
            }
        } else {
            // back‑edge
            low[node] = min(low[node], disc[neighbour]);
        }
    }

    // root articulation check:
    if (parent == -1 && children > 1) {
        ap[node] = 1;
    }
}

// Finds and prints all articulation points in an undirected graph.
// edges: list of m edges, each {u, v} (0-based indexing assumed)
void articulationPoints(const vector<vector<int>> &edges, int n, int m)
{
    // Build adjacency list
    unordered_map<int, list<int>> AdjList;
    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }
    int timer = 0;
    vector<int> disc(n, -1), low(n, -1), ap(n, 0);
    unordered_map<int, bool> visited;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            apDFS(i, -1, timer, disc, low, visited, AdjList, ap);
        }
    }

    cout << "Articulation Points in Graph are:\n";
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (ap[i]) {
            cout << i << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "None\n";
    }
}
