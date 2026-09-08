class Solution {
   public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nidx;
        int n = nums1.size();

        for (int i = 0; i < n; i++) {
            nidx[nums1[i]] = i;
        }

        vector<int> res(n, -1);

        stack<int> st;
        for (int num : nums2) {
            while (!st.empty() && num > st.top()) {
                int val = st.top();
                st.pop();
                int idx = nidx[val];
                res[idx] = num;
            }
            if (nidx.find(num) != nidx.end()) {
                st.push(num);
            }
        }
        return res;
    }
};