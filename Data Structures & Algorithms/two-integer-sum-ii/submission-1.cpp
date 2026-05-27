class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size= numbers.size();
        int l=0; int r=size-1;
        vector<int> arr= {0,0};
        while(l<r){
            if(target==numbers[l]+numbers[r]){
                arr[0]=l+1;
                arr[1]=r+1;
                break;
            }
            if(target > (numbers[l]+numbers[r])){
                l++;
            } else {
                r--;
            }
        }

        return arr;
    }
};
