class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int ans=0;
        int maxFreq=0;
        unordered_map<char,int> count;
        for(int r=0;r<s.size();r++){
            count[s[r]]++;
            maxFreq= max(maxFreq, count[s[r]]);

            while((r-l+1)-maxFreq>k){
                count[s[l]]--;
                l++;
            }
            ans=max(ans, r-l+1);
        }
        return ans;
    }
};
