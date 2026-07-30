class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> us;
        int l=0, ans=0;
        for(int i=0;i<s.size();i++){
            while(us.find(s[i])!= us.end()){
                us.erase(s[l]);
                l++;
            }
            us.insert(s[i]);
            ans = max(ans, i-l+1);
        }
        return ans;
    }
};
