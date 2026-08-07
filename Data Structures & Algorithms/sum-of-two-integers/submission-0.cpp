class Solution {
public:
    int getSum(int a, int b) {
        int res=0;
        int carry=0;
        int mask= 0xFFFFFFFF;
        
        for(int i=0;i<32;i++){
            int ai= (a >> i) & 1;
            int bi= (b >> i) & 1;
            int sum= ai^bi^carry;
            carry= (ai+bi+carry) >= 2? 1:0;
            if(sum){
                res|= (1<<i);
            }
        }
        if(res> 0x7FFFFFFF){
            res= ~(res^mask);
        }
        return res;
    }
};
