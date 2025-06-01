### Sliding Window 

- https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/
- https://leetcode.com/problems/max-consecutive-ones-iii/
- https://leetcode.com/problems/grumpy-bookstore-owner/
- https://leetcode.com/problems/sliding-window-median/

### Two Pointer 

- https://leetcode.com/problems/partition-labels/ find farthest last occurrence of chars and split when current ind = lastOcc(char)
- https://leetcode.com/problems/sort-colors/ use 2 passes, 1st to push 0s at start, 2nd to push 2s at end 
- https://leetcode.com/problems/longest-repeating-character-replacement/ dynamic SW, invalid condition check while ((endi - start + 1) - mostFreq > k)
- https://leetcode.com/problems/maximum-number-of-visible-points/ dynamic SW, find angle = atan2(y, x) * 180/pi, store angle and (angle + 360)
- https://leetcode.com/problems/subarrays-with-k-different-integers/ return atMostk(nums, k) - atMostk(nums, k - 1), dynamic SW, ans += (endi - start + 1), ans = no, of subarrays with distinct count <= k
