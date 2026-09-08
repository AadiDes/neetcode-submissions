class Solution {
   public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int boats = 0;
        int n = people.size();
        int l = 0, r = n - 1;
        while (l <= r) {
            int remain = limit - people[r--];
            boats++;
            if (l <= r && remain >= people[l]) {
                l++;
            }
        }
        return boats;
    }
};