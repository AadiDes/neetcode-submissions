class Solution {
   public:
    string mergeAlternately(string word1, string word2) {
        int s1 = word1.size();
        int s2 = word2.size();
        string ans = "";
        for (int i = 0; i < s1 || i < s2; i++) {
            if (i < s1) ans += word1[i];
            if (i < s2) ans += word2[i];
        }
        return ans;
    }
};