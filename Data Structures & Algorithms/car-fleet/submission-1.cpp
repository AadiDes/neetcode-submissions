class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int len= position.size();
        int fleets=1;
        vector<pair<int,int>> pair;
        for(int i=0;i<len;i++){
            pair.push_back({position[i],speed[i]});
        }
        sort(pair.rbegin(),pair.rend());
        double prevT= (double) (target - pair[0].first) / pair[0].second;
        for(int i=1;i<len;i++){
            
            double currT= (double) (target - pair[i].first) / pair[i].second;

            if(currT> prevT){
                fleets++;
                prevT=currT;
            }
        }
        return fleets;

    }
};