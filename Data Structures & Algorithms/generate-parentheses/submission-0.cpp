class Solution {
   public:
    vector<string> res;

    void dfs(int open, int closed, int n, string& stack) {
        if (open == closed && open == n) {
            res.push_back(stack);
            return;
        }
        if (open < n) {
            stack += '(';
            dfs(open + 1, closed, n, stack);
            stack.pop_back();
        }
        if (closed < open) {
            stack += ')';
            dfs(open, closed + 1, n, stack);
            stack.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string stack;
        dfs(0, 0, n, stack);
        return res;
    }
};
