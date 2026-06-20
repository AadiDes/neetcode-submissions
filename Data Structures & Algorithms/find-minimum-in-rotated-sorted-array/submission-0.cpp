class Solution {
public:
    int findMin(vector<int> &nums) {
        int s=nums.size();
        int r=s-1;int l=0;
        while(l<r){
            int m= l+(r-l)/2;
            if(nums[m]<nums[r]){
                r=m;
            } else{
                l=m+1;
            }
        }
        return nums[l];
    }
};
