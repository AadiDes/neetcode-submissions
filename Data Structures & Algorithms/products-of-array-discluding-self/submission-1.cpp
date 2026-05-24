class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        vector<int> pre(len,1); pre[0]=1;
        vector<int> suf(len,1); suf[len-1]=1;
        vector<int> ans(len,1);

        for(int i=1;i<len;i++){
            pre[i]=pre[i-1]*nums[i-1];
        }

        for(int i=len-2;i>=0;--i){
            suf[i]=suf[i+1]*nums[i+1];
        }

        for(int i=0;i<len;i++){
            ans[i]=pre[i]*suf[i];
        }
        return ans;
    }
};
