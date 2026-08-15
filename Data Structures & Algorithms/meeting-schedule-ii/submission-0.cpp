/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        map<int,int> mp;
        int prev=0, res=0;
        for(auto& i:intervals){
            mp[i.start]++;
            mp[i.end]--;
        }
        for(auto& [key,value] :mp){
            prev+=value;
            res= max(res,prev);
        }
        return res;
    }
};
