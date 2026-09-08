class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans=0, maxC=0;
        for( auto n: nums){
            m[n]++;
            if( m[n]>maxC){
                ans=n;
                maxC= m[n];
            }
        }
        return ans;
    }
};