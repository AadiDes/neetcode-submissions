class Solution {
   public:
    vector<vector<int>> ans;
    void dfs(vector<int>& nums, vector<int>& curr, int i, int target) {
        if (target == 0) {
            ans.push_back(curr);
            return;
        }
        if (i >= nums.size() || target < 0) return;
        curr.push_back(nums[i]);
        dfs(nums, curr, i, target - nums[i]);
        curr.pop_back();
        dfs(nums, curr, i+1, target);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> curr;
        dfs(nums, curr, 0, target);
        return ans;
    }
};
