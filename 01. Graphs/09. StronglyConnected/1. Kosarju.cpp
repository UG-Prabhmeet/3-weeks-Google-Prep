/*
    TC O(E+V)
    SC O(E+V)

    1-  Apply DFS(same as in topo sort) and save outputs of this DSF and revserse it
    2-  take transpose of graph 
    3-  Apply DFS on transpose of graph and find connected comp.

*/

#include <bits/stdc++.h>
using namespace std;

void topoStackDFS(int node,
                  stack<int> &st,
                  vector<bool> &visited,
                  const vector<vector<int>> &adj)
{
    visited[node] = true;
    for (int nbr : adj[node]) {
        if (!visited[nbr]) {
            topoStackDFS(nbr, st, visited, adj);
        }
    }
    st.push(node);
}

// DFS on the transposed graph
void revDFS(int node,
            vector<bool> &visited,
            const vector<vector<int>> &transposed)
{
    visited[node] = true;
    for (int nbr : transposed[node]) {
        if (!visited[nbr]) {
            revDFS(nbr, visited, transposed);
        }
    }
}

// Kosaraju’s algorithm: returns number of strongly connected components
int stronglyConnectedComp(int n, const vector<vector<int>> &edges) {
    // Build directed adjacency list
    vector<vector<int>> adj(n);
    for (const auto &e : edges) {
        int u = e[0], v = e[1];
        adj[u].push_back(v);
    }

    // Fill vertices in stack according to finishing times
    stack<int> st;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            topoStackDFS(i, st, visited, adj);
        }
    }

    // Transpose the graph
    vector<vector<int>> transposed(n);
    for (int u = 0; u < n; u++) {
        for (int v : adj[u]) {
            transposed[v].push_back(u);
        }
    }

    // Process all vertices in order defined by the stack
    fill(visited.begin(), visited.end(), false);
    int sccCount = 0;
    while (!st.empty()) {
        int node = st.top();
        st.pop();
        if (!visited[node]) {
            sccCount++;
            revDFS(node, visited, transposed);
        }
    }
    return sccCount;
}
