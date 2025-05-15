/* Dijkstra’s Algorithm
   For directed/undirected graphs with only positive weights
   Solves Single-Source Shortest Path (SSSP) using a min-heap
   Time: O((V + E) * log V), Space: O(V + E)
*/

// https://leetcode.com/problems/minimum-weighted-subgraph-with-the-required-paths/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
	vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src)
	{
	    int n = adj.size();
	    vector<int> dist(n, INT_MAX); // to minimise it
	    dist[src] = 0;
	
	    // Min-heap priority queue: (distance, node)
	    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	    pq.push({0, src});
	
	    while (!pq.empty())
	    {
	        auto [currDist, node] = pq.top();
	        pq.pop();
	
	        // Skip if we have already found a better path
	        if (dist[node] < currDist)
	        {
	            continue;
	        }
	
	        for (auto &[nbr, weight] : adj[node])
	        {
	            if (currDist + weight < dist[nbr])
	            {
	                dist[nbr] = currDist + weight;
	                pq.push({dist[nbr], nbr});
	            }
	        }
	    }
	
	    return dist;
	}

    long long minimumWeight(int n, vector<vector<int>>& edges, int src1, int src2, int dest) {
        map<ll,vector<vector<ll>>> m,m1;
        for(auto &a:edges) {
            m[a[0]].push_back({a[1],a[2]});
            m1[a[1]].push_back({a[0],a[2]});
        }
        vector<ll> src1Dis(n,LONG_MAX),src2Dis(n,LONG_MAX),destDis(n,LONG_MAX);
        dij(src1,m,src1Dis);
        dij(src2,m,src2Dis);
        dij(dest,m1,destDis);
        ll ans=LONG_MAX;
        for(int i=0;i<n;i++) {
            if(src1Dis[i]==LONG_MAX||src2Dis[i]==LONG_MAX||destDis[i]==LONG_MAX) continue;
            ans=min(ans,src1Dis[i]+src2Dis[i]+destDis[i]);
        }
        return ans==LONG_MAX?-1:ans;
    }
};
