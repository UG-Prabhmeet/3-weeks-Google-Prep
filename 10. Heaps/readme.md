## Heap

### Medium

1. https://leetcode.com/problems/k-closest-points-to-origin/  
2. https://leetcode.com/problems/kth-largest-element-in-an-array/  
3. https://leetcode.com/problems/reorganize-string/  
4. https://leetcode.com/problems/furthest-building-you-can-reach/ minHeap of siz = ladders, if(siz > ladders){ bricks -= pq.top()) 
5. https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/  
6. https://leetcode.com/problems/cheapest-flights-within-k-stops/ BFS + queue<tuple<city, cost, stops>> q; vector<int>dist(n, INT_MAX)
7. https://leetcode.com/problems/find-the-most-competitive-subsequence/ vi st of siz k, while(curr < st.back() + st.size + (n - i) > k) st.pop
8. https://leetcode.com/problems/ugly-number-ii/ push multiples of curr = 1 of 2, 3, 5 in minHeap, use set to avoid duplicates

### Hard

1. https://leetcode.com/problems/merge-k-sorted-lists/  
2. https://leetcode.com/problems/sliding-window-maximum/  
3. https://leetcode.com/problems/the-skyline-problem/  
4. https://leetcode.com/problems/trapping-rain-water-ii/  
5. https://leetcode.com/problems/minimum-number-of-refueling-stops/  
6. https://leetcode.com/problems/swim-in-rising-water/ Dijkstra + minHeap to travel only from smallest elevations and Store maxElevation during path
7. https://leetcode.com/problems/shortest-path-to-get-all-keys/  
8. https://leetcode.com/problems/minimum-cost-to-hire-k-workers/ maxHeap of quality of siz = k, when siz > k, heap.pop , ans = min(totalQuality * ratio[i])
9. https://leetcode.com/problems/k-th-smallest-prime-fraction/  
