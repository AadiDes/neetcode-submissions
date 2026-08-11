class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> nums1(nums.begin()+1, nums.end());
        vector<int> nums2(nums.begin(), nums.end()-1);
        return max(nums[0], max(dp(nums1),dp(nums2)));
    }
    int dp(vector<int>& nums){
        int one=0, two=0;
        for(int num: nums){
            int temp= max(two, one+num);
            one=two;
            two=temp;
        }
        return two;
    }
};
