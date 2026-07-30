class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> track;
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(track.count(diff))
                return {track[diff],i};
            track[nums[i]] =i;
        }
        return {};
    }
};
