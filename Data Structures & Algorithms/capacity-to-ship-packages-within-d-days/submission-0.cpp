class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxD=0;
        for(int n:weights){
            maxD= max(maxD, n);
        }

        while(true){
            int ships=1, cap=maxD;
            for(int w: weights){
                if(cap-w<0){
                    ships++;
                    cap=maxD;
                }
                cap-=w;
            }
            if(ships<=days){
                return maxD;
            }
            maxD++;
        }
    }
};