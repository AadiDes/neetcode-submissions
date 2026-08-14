class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax= nums[0], currMin=nums[0], ans=nums[0];
        for(int i=1; i<nums.size();i++){
            int x=nums[i];
            int mx= currMax, mn= currMin;
            currMax= max({x, mx*x, mn*x});
            currMin= min({x, mx*x, mn*x});
            ans= max(ans, currMax);
        }
        return ans;
    }
};
