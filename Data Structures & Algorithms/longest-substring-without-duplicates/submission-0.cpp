class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> se;
        int l=0;
        int ans=0;
        for(int r=0;r<s.size();r++){
            while(se.find(s[r])!= se.end()){
                se.erase(s[l]);
                l++;
            }
            se.insert(s[r]);
            ans=max(ans, r-l+1);
        }
        return ans;
    }
};
