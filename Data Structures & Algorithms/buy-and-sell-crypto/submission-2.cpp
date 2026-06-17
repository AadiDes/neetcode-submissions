class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=prices[0], ans=0;
        for(int &sell : prices){
            ans= max(ans,sell-low);
            low= min(low , sell);
        }
        return ans;
    }
};
