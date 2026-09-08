class Solution {
   public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        for (int x : asteroids) {
            bool dest = false;
            while (!st.empty() && st.back() > 0 && x < 0) {
                if (st.back() < -x) {
                    st.pop_back();
                } else if (st.back() == -x) {
                    st.pop_back();
                    dest = true;
                    break;
                } else {
                    dest = true;
                    break;
                }
            }
            if (!dest) {
                st.push_back(x);
            }
        }
        return st;
    }
};