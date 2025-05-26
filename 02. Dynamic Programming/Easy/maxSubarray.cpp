class Solution {
public:
  // kadane's algo T = O(N), 
  int maxSubArray(vector<int>& nums) {
      int ans = nums[0], curr = 0;
      for (auto ele : nums) {
          curr += ele;
          ans = max(ans, curr);
          if (curr < 0) {
              curr = 0;
          }
      }
      return ans;
  }
};
