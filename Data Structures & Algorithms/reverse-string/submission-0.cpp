class Solution {
   public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        for (int i = 0; i < n / 2; i++) {
            char c1 = s[i];
            char c2 = s[n - i - 1];
            s[i] = c2;
            s[n - i - 1] = c1;
        }
    }
};