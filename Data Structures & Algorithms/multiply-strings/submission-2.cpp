class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2=="0") return "0";
        int m=num1.size(), n=num2.size();
        vector<int> res(m+n,0);

        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int p1 = i + j, p2 = i + j + 1;
                int sum = mul + res[p2];   // add into the low slot
                res[p2] = sum % 10;        // units digit stays
                res[p1] += sum / 10;       // carry into the high slot
            }
        }

        string ans;
        for (int d : res) {
            if (!(ans.empty() && d == 0))  // skip leading zeros
                ans += (d + '0');
        }
        return ans.empty() ? "0" : ans;
    }
};
