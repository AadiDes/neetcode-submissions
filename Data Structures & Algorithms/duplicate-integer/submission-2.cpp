class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> m;
        for(int x: nums){
            m.insert(x);
        }

        if(m.size() < nums.size()){
            return true;
        } else {
            return false;
        }
    }
};