class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(auto& i: nums){
            m[i]++;
        }
        vector<vector<int>> freq(nums.size()+1);

        for(const auto& e:m ){
            freq[e.second].push_back(e.first);
        }
        vector<int> ans;
        for(int i=freq.size()-1;i>0; --i){
            for(int n: freq[i]){
                ans.push_back(n);
                    if(ans.size()==k){
                        return ans;
                    }
                
            }
        }
    }
};
