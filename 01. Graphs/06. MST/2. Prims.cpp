/*
	Notes:
	1- No self loop or parelled edges 
	2- We try to connect all the nodes 
	3- We start by picking 1 node 
	4- Then we select the smallest edge from this node 
	5- Now we have 2 nodes
	6- Now we select the min edge from these 2 nodes
	7- This way we keep including nodes and covers up all nodes
	8- In total we have V nodes and V-1 edges
	9- We use adj list 
	Time Complexity :- O((V+E)Log(V))
	Space Complexity :- O(E+V)

*/

#include <bits/stdc++.h>
using namespace std;

// Function to return the minimum spanning tree
vector<pair<pair<int, int>, int>> PrimsOptimized(int n, int m, vector<pair<pair<int, int>, int>> &edges)
{
    // Adjacency List Creation
    unordered_map<int, list<pair<int, int>>> adjList;

    for (int i = 0; i < m; ++i)
    {
        int u = edges[i].first.first;
        int v = edges[i].first.second;
        int wt = edges[i].second;

        adjList[u].push_back({v, wt});
        adjList[v].push_back({u, wt});
    }

    // Min Heap: {weight, node}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

    // Vectors for key values, MST inclusion, and parent tracking
    vector<int> key(n, INT_MAX);
    vector<bool> inMST(n, false);
    vector<int> parent(n, -1);

    key[0] = 0;
    minHeap.push({0, 0}); // {weight, node}

    while (!minHeap.empty())
    {
        int u = minHeap.top().second;
        minHeap.pop();

        if (inMST[u]){
            continue;
	}
        inMST[u] = true;

        for (auto &nbr : adjList[u])
        {
            int v = nbr.first;
            int wt = nbr.second;

            if (!inMST[v] && wt < key[v])
            {
                key[v] = wt;
                parent[v] = u;
                minHeap.push({wt, v});
            }
        }
    }

    // Constructing the result MST
    vector<pair<pair<int, int>, int>> resultMST;
    for (int i = 1; i < n; ++i)
    {
        resultMST.push_back({{parent[i], i}, key[i]});
    }
    return resultMST;
}
