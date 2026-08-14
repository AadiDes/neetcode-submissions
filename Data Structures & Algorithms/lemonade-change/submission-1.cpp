class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
    int b5=0, b10=0;
    for(int b: bills){
        if(b==5) {
            b5++;
        }
        else if(b==10){
            b10++;
            b5--;
        } else if(b10>0) {
            b10--;
            b5--;
        } else {
            b5-=3;
        }
        if(b5<0){
            return false;
        }
    }
    return true;
    }
};