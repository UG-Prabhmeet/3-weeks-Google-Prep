/*
	Notes:
	1- It used edge list 
	2- Sort all edges according to the weights
	3- Then start selecting edges 1 by 1 
	4- Only select an edge if it doesnt form a cycle 
	5- Use DSU for that 
	6- Time Complexity O(ElogV)
	7- Space Complexity O(V)
*/ 

#include <bits/stdc++.h>
using namespace std;

// DSU Initialization
void makeSet(vector<int> &parent, vector<int> &rank, int n)
{
    parent.resize(n);
    rank.resize(n);   // crude measure of tree's height
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
}

// Path Compression
int findParent(vector<int> &parent, int node)
{
    if (parent[node] == node){
        return node;
    }
    return parent[node] = findParent(parent, parent[node]);
}

// Union by Rank
void unionSET(int u, int v, vector<int> &parent, vector<int> &rank)
{
    u = findParent(parent, u);
    v = findParent(parent, v);

    if (u == v)
        return;

    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if (rank[v] < rank[u])
    {
        parent[v] = u;
    }
    else
    {
        parent[v] = u;
        rank[u]++;
    }
}

// Comparator for sorting edges by weight
bool cmp(vector<int> &a, vector<int> &b)
{
    return a[2] < b[2];
}

// Kruskal’s Algorithm to return MST edges
vector<pair<pair<int, int>, int>> KruskalMST(vector<vector<int>> &edges, int n)
{
    sort(edges.begin(), edges.end(), cmp); // Sort by weight

    vector<int> parent, rank;
    makeSet(parent, rank, n);

    vector<pair<pair<int, int>, int>> mstEdges; // To store MST edges

    for (auto &edge : edges)
    {
        int u = edge[0], v = edge[1], wt = edge[2];
        int pu = findParent(parent, u), pv = findParent(parent, v);
        if (pu != pv)
        {
            mstEdges.push_back({{u, v}, wt});
            unionSET(pu, pv, parent, rank);
        }
    }
    return mstEdges;
}
