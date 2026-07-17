class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> pick(nums.size(), false);
        vector<int> temp;
        backtrack(temp, nums, pick);
        return ans;
    }
    void backtrack(vector<int>& temp, vector<int>& nums, vector<bool>& pick){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(!pick[i]){
                temp.push_back(nums[i]);
                pick[i]=true;
                backtrack(temp, nums, pick);
                temp.pop_back();
                pick[i]=false;
            }
        }
    }
};
