class Solution {
   public:
    vector<vector<int>> res;
    void dfs(vector<int>& candidates, int i, int target, int total, vector<int>& cur) {
        if(total==target){
            res.push_back(cur);
            return;
        }

        for(int j=i;j<candidates.size();j++){
            if(j>i && candidates[j] == candidates[j-1]) continue;
            if(total+candidates[j]> target)break;
            cur.push_back(candidates[j]);
            dfs(candidates, j+1, target, total+ candidates[j], cur);
            cur.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> cur;
        res.clear();
        sort(candidates.begin(), candidates.end());
        dfs(candidates, 0, target, 0, cur);
        return res;
    }
};
