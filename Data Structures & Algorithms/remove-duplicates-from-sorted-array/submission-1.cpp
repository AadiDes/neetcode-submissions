class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int l=0,r=1;
       if(nums.size()<2) return nums.size(); 
       int k=1;
       while(r<nums.size()){
            if(nums[r]==nums[l]){
                r++;
                continue;
            } else {
                nums[l+1]=nums[r];
                l++;
                r++;
                k++;
            }
       }
       return k;
    }
};