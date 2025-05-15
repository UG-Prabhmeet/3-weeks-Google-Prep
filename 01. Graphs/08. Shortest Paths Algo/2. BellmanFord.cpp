/*

    TC O(E*V)
    SC O(V)
    
    relax for n-1 times 
    relax one more time to detect -ve cycle
    
*/

class Solution {
public:
    vector<int> bellmanFord(int V, vector<vector<int>> &edges, int src)
    {
        const int INF = 1e9;
        vector<int> dist(V, INF);
        dist[src] = 0;
    
        // Relax all edges V - 1 times
        for (int i = 1; i < V; ++i)
        {
            for (auto &edge : edges)
            {
                int u = edge[0], v = edge[1], w = edge[2];
                if (dist[u] != INF && dist[u] + w < dist[v])
                {
                    dist[v] = dist[u] + w;
                }
            }
        }
        // Check for negative weight cycle
        for (auto &edge : edges)
        {
            int u = edge[0], v = edge[1], w = edge[2];
            if (dist[u] != INF && dist[u] + w < dist[v])
            {
                return {-1}; // Negative weight cycle detected
            }
        }
    
        return dist;
    }

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dis(n+1,6000);
        dis[k]=0;
        int ans=INT_MIN;
        for(int i=0;i<n-1;i++) {
            for(auto &a:times) {
                if(dis[a[1]]>dis[a[0]]+a[2]) {
                    dis[a[1]]=dis[a[0]]+a[2];
                }
            }
        }
        for(int i=1;i<=n;i++) {
            ans=max(ans,dis[i]);
        }
        return ans==6000?-1:ans;
    }
};
