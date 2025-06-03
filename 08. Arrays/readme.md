## Arrays 
### Easy

1. https://leetcode.com/problems/two-sum/
2. https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
3. https://leetcode.com/problems/plus-one/
4. https://leetcode.com/problems/move-zeroes/
5. https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
6. https://leetcode.com/problems/running-sum-of-1d-array/
7. https://leetcode.com/problems/find-pivot-index/
8. https://leetcode.com/problems/majority-element/
9. https://leetcode.com/problems/fibonacci-number/
10. https://leetcode.com/problems/squares-of-a-sorted-array/
11. https://leetcode.com/problems/pascals-triangle/
12. https://leetcode.com/problems/remove-duplicates-from-sorted-array/

### Medium

1. https://leetcode.com/problems/merge-intervals/  
2. https://leetcode.com/problems/3sum/  
3. https://leetcode.com/problems/product-of-array-except-self/  
4. https://leetcode.com/problems/insert-delete-getrandom-o1/  
5. https://leetcode.com/problems/subarray-sum-equals-k/  
6. https://leetcode.com/problems/next-permutation/  
7. https://leetcode.com/problems/spiral-matrix/  
8. https://leetcode.com/problems/container-with-most-water/  
9. https://leetcode.com/problems/rotate-image/  
10. https://leetcode.com/problems/word-search/  
11. https://leetcode.com/problems/3sum-closest/  
12. https://leetcode.com/problems/game-of-life/  
13. https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/  
14. https://leetcode.com/problems/4sum/  
15. https://leetcode.com/problems/find-the-duplicate-number/  
16. https://leetcode.com/problems/combination-sum/  
17. https://leetcode.com/problems/jump-game-ii/  
18. https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/  
19. https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/ return (max consecutive horizontal cut diff * max consecutive vertical cut diff)
20. https://leetcode.com/problems/max-area-of-island/  
21. https://leetcode.com/problems/find-all-duplicates-in-an-array/ if nums[abs(x) - 1] is -ve, then x is duplicate otherwise set it to be -ve
22. https://leetcode.com/problems/k-diff-pairs-in-an-array/ store ele in map, for ele : hash if(hash.count(ele + k)) ans++ for unique ele
23. https://leetcode.com/problems/subsets/  
24. https://leetcode.com/problems/invalid-transactions/  
25. https://leetcode.com/problems/jump-game/  
26. https://leetcode.com/problems/subarray-sums-divisible-by-k/ If 2 prefix sums have same remainder mod k, then subarray between them is divisible by k

### Hard

1. https://leetcode.com/problems/first-missing-positive/ 2 loops, 1st for marking each ele to its ideal posi, 2nd if(nums[i] != (i+1)) then (i+1) is first missing +ve
2. https://leetcode.com/problems/largest-rectangle-in-histogram/  
3. https://leetcode.com/problems/insert-delete-getrandom-o1-duplicates-allowed/ unordered_map<int, unordered_set<int>> hash, value to set of indices/positions
4. https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/  
5. https://leetcode.com/problems/max-value-of-equation/ Maximize (yj + xj) + (yi - xi) for all valid xj - xi <= k. 
