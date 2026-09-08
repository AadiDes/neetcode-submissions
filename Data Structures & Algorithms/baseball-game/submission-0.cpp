class Solution {
   public:
    int calPoints(vector<string>& operations) {
        stack<int> nums;
        int n = operations.size();
        for (auto& cur : operations) {
            if (cur == "+") {
                int top = nums.top();
                nums.pop();
                int newTop = top + nums.top();
                nums.push(top);
                nums.push(newTop);
            } else if (cur == "C") {
                nums.pop();
            } else if (cur == "D") {
                nums.push(2 * nums.top());
            } else {
                nums.push(stoi(cur));
            }
        }
        int sum = 0;
        while (!nums.empty()) {
            sum += nums.top();
            nums.pop();
        }
        return sum;
    }
};