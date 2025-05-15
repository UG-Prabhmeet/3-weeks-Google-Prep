/* Floyd-Warshall Algorithm
   For directed/undirected graphs with +ve or -ve weights (no negative cycles)
   Solves Multi-Source Shortest Path (MSSP) — // shortest distances between every pair of nodes
   Time: O(V³), Space: O(V²)
*/

void shortestDistance(vector<vector<int>> &mat)
{
    int n = mat.size();
    const int INF = 1e9;

    // Step 1: Preprocess the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == -1)
            {
                mat[i][j] = INF;
            }
            if (i == j)
            {
                mat[i][j] = 0;
            }
        }
    }

    // Step 2: Floyd-Warshall algorithm
    for (int stop = 0; stop < n; stop++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][stop] != INF && mat[stop][j] != INF)
                {
                    mat[i][j] = min(mat[i][j], mat[i][stop] + mat[stop][j]);
                }
            }
        }
    }

    // Step 3: Restore unreachable values to -1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == INF)
            {
                mat[i][j] = -1;
            }
        }
    }
}
