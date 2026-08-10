class Solution {
public:
    bool isHappy(int n) {
        int t=0;
        set<int> s;
        while(1){
            if(s.count(n)==1) return false;
            if(n==1) return true;
            s.insert(n);
            t=0;
            while(n){
                int d= n%10;
                t+= d*d;
                n=n/10;
            }
            n=t;
        }
    }
};
