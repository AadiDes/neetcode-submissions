class Solution {
public:
    int BinarySearch(int l, int r, vector<int> nums, int target){
        if (l>r) return -1;
        int mid= l+ (r-l)/2;
        if (nums[mid]==target) return mid;
        return ((nums[mid]>target)?
        BinarySearch(l,mid-1,nums, target): 
        BinarySearch(mid+1,r, nums, target));
        
    }
    int search(vector<int>& nums, int target) {
        return BinarySearch(0, nums.size()-1, nums, target);
    }
};
