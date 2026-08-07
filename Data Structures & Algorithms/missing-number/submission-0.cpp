class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res=nums.size();
        for(int i=0;i<nums.size();i++){
            res ^= i;
        }

        for( int x:nums){
            res^= x;
        }

        return res;
    }
};
