DP 
1. https://codeforces.com/problemset/problem/577/B
2. https://leetcode.com/problems/cherry-pickup/
3. https://codeforces.com/problemset/problem/225/C

## Dynamic Programming

### Easy
1. https://leetcode.com/problems/maximum-subarray/ [kadane's algo]
2. https://leetcode.com/problems/climbing-stairs/ [Ways to step = sum of last two steps]
3. https://leetcode.com/problems/divisor-game/ dp[i] = dp[i] || !dp[i - j];  dp[i] - alice wins/loses if n == i
4. https://leetcode.com/problems/counting-bits/ setBits[i] = setBits[i / 2] + (i & 1)

### Medium
1. https://leetcode.com/problems/decode-ways/
2. https://leetcode.com/problems/word-break/ dp[end] = true if any dp[start] before it is true and string[start..end-1] is in wordDict
3. https://leetcode.com/problems/delete-and-earn/
4. https://leetcode.com/problems/maximal-square/ dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1 , dp[i][j] - sq ending @ (i,j)
5. https://leetcode.com/problems/coin-change/ dp[amt] = min(dp[amt], dp[amt - coin] + 1); dp[i] = min coins to make amt  = i
6. https://leetcode.com/problems/maximum-product-subarray/ left to right, right to left prod check 
7. https://leetcode.com/problems/maximum-length-of-repeated-subarray/
8. https://leetcode.com/problems/palindromic-substrings/ vector<vector<bool>> dp(n, vector<bool>(n, false)) dp[i][j] - substring(i, j) is palindrome or not
9. https://leetcode.com/problems/house-robber/ dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]) dp[i] = max amt at ind = i
10. https://leetcode.com/problems/continuous-subarray-sum/
11. https://leetcode.com/problems/knight-dialer/ At each digit, recursively try all valid knight moves for `n-1` steps and memoize — sum results over all starting digits.
12. https://leetcode.com/problems/longest-increasing-subsequence/ Replace 1st no. ≥ curr to maintain LIS with smaller ending eles in time O(nLogn)
13. https://leetcode.com/problems/unique-paths/ Each cell can be reached either from top or left — so sum both to get total paths.
14. https://leetcode.com/problems/count-square-submatrices-with-all-ones/ same as maximal squares here adding dp[i][j] instead of maxing
15. https://leetcode.com/problems/range-sum-query-2d-immutable/
16. https://leetcode.com/problems/longest-arithmetic-subsequence/

### Hard
1. https://leetcode.com/problems/trapping-rain-water/ ans += min(leftMAX[i] , rightMAX[i]) - height[i] ; height[i] represents the water col width where water cant be stored 
2. https://leetcode.com/problems/word-break-ii/
3. https://leetcode.com/problems/regular-expression-matching/
4. https://leetcode.com/problems/maximal-rectangle/
5. https://leetcode.com/problems/longest-valid-parentheses/ maxLen = max(maxLen, indof( - st.top())
6. https://leetcode.com/problems/edit-distance/ if word1[i] != word2[j] -> dp[i][j] = 1 + min({insertOp, deleteOp, replaceOp})
7. https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule/
8. https://leetcode.com/problems/frog-jump/
9. https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/ 3D dp 3 states are changing now -> ind , (buy or not buy) , (limit of buying - 0 , 1 ,2, ..... k)
10. https://leetcode.com/problems/burst-balloons/ similar to min cost to cut a stick
11. https://leetcode.com/problems/minimum-cost-to-merge-stones/
12. https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/ s.length() - Longest Common Subseq of str with reversedStr
13. https://leetcode.com/problems/super-egg-drop/
14. https://leetcode.com/problems/count-different-palindromic-subsequences/
15. https://leetcode.com/problems/minimum-cost-to-cut-a-stick/ try all cuts b/w start & end cost = len of(end - start) + solve(start , cutPosi - 1) + solve(cutPosi + 1, end)
