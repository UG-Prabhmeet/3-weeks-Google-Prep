Representation 
1. https://leetcode.com/problems/minimum-degree-of-a-connected-trio-in-a-graph/  [brute force]


BFS
1. https://leetcode.com/problems/word-ladder/   [checking for each char with a to z]
2. https://leetcode.com/problems/word-ladder-ii/  [mark no. of steps to reach each string from beginWord with BFS and use DFS to retrace all the paths]
3. https://leetcode.com/problems/shortest-path-visiting-all-nodes/   (TO DO IN DP)
4. https://codeforces.com/problemset/problem/1037/D  [sorting AdjList based on position of ele from given BFS VECTOR]


DFS
1. https://www.hackerrank.com/challenges/journey-to-the-moon/problem [find no. of ele in each connected component(country) and then totalPairs - Sum of (ele * ele-1)/2]
3. https://leetcode.com/problems/maximum-path-quality-of-a-graph/  [check for all paths under this Constraint (edgeWeight + currQualityofPath <= maxTime) using DFS]
3. https://leetcode.com/problems/couples-holding-hands/  [better to be solved with Hashmap solution]
4. https://leetcode.com/problems/reconstruct-itinerary/submissions/ [sort Adj list lexicographically and add current node after visiting and removing all its nbr at last]


Cycle Detection
1. Cycle detection Directed graph
2. Cycle detection Undirected graph
3. Bipartite  [adjacent nodes must have different colors]
4. https://leetcode.com/problems/course-schedule/  [topoSort / cycle detection in directed graph]
5. https://leetcode.com/problems/course-schedule-ii/  [return valid topoSort]
6. https://leetcode.com/problems/detect-cycles-in-2d-grid/ [literal question, use bool dfs with pi and pj as previous coordinates] 
7. Shortest Cycle in an undirected Graph
8. Detecting odd len cycle (Bipartite)
9. https://leetcode.com/problems/maximum-employees-to-be-invited-to-a-meeting/ [TEMPLATE ⭐] [longest cycle detection using dfs]


DAG or Topological Sort
1. https://leetcode.com/problems/all-paths-from-source-to-target/ [TEMPLATE ⭐] {backtrack at last}
2. https://leetcode.com/problems/largest-color-value-in-a-directed-graph/ [TO DO IN DP]


MST
1. https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/ [GOTTA CHECK IT]
2. https://leetcode.com/problems/min-cost-to-connect-all-points/ [direct spanning tree code on manipulation of given data]
3. https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/ [2 separate dsu and totalEdges - minUsedEdges = maxRemoved edges] 


DSU
1. https://leetcode.com/problems/redundant-connection-ii/ [build a graph without one of the 2 problematic edges and if its not successfully built then ignored edge is redundant]


Trie
1. https://www.codingninjas.com/codestudio/problems/implement-trie_631356
2. https://www.codingninjas.com/codestudio/problems/implement-trie_1387095
3. https://www.codingninjas.com/codestudio/problems/complete-string_2687860
4. https://www.codingninjas.com/codestudio/problems/count-distinct-substrings_985292
5. https://www.codingninjas.com/codestudio/problems/maximum-xor_973113
6. https://www.codingninjas.com/codestudio/problems/max-xor-queries_1382020
7. https://leetcode.com/problems/word-search-ii/
