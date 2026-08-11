class Solution {
public:
    int rob(vector<int>& nums) {
        int p2=0, p1=0;
        for(int x: nums){
            int cur= max(p2, p1+x);
            p1=p2;
            p2=cur;
        }
        return p2;
    }
};
