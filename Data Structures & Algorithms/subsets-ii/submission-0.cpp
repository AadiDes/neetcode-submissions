class Solution {
   public:
    vector<vector<int>> res;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> cur;
        dfs(nums, cur, 0);
        return res;
    }

    void dfs(vector<int>& nums, vector<int>& cur, int i) {
        res.push_back(cur);
        for (int j = i; j < nums.size(); j++) {
            if(j > i && nums[j] == nums[j - 1]) continue;
            cur.push_back(nums[j]);
            dfs(nums, cur, j + 1);
            cur.pop_back();
        }
    }
};
