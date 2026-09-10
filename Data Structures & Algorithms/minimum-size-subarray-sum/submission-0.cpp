class Solution {
   public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, total = 0, ans = INT_MAX;
        for (int r = 0; r < nums.size(); r++) {
            total += nums[r];
            while (total >= target) {
                ans = min(r - l + 1, ans);
                total -= nums[l];
                l++;
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};