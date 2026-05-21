class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0;
        unordered_set<int> numSet(nums.begin(), nums.end());
        
        for(int num: numSet){
            if(numSet.find(num-1)==numSet.end()){
                int length =1;
                while(numSet.find(num+length) != numSet.end()){
                    length++;
                }
                ans=max(ans,length);
            }
        }
    return ans;   
    }
};
