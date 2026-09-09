class Solution {
   public:
    string decodeString(string s) {
        vector<string> strings;
        vector<int> counts;
        string cur = "";
        int k = 0;

        for (char c : s) {
            if (isdigit(c)) {
                k = k * 10 + (c - '0');
            } else if (c == '[') {
                strings.push_back(cur);
                counts.push_back(k);
                cur = "";
                k = 0;
            } else if (c == ']') {
                string temp = cur;
                cur = strings.back();
                strings.pop_back();
                int count = counts.back();
                counts.pop_back();
                while (count--) {
                    cur += temp;
                }
            } else {
                cur += c;
            }
        }
        return cur;
    }
};