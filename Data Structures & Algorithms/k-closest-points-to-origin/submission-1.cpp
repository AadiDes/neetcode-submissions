class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<>> maxHeap;
        vector<vector<int>> res;

        for (auto& p: points){
            maxHeap.push({p[0]*p[0] + p[1]*p[1], p});
        }
        while(k--){
            res.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return res;
    }
};
