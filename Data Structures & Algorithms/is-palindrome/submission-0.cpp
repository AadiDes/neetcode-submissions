class Solution {
public:
    bool isPalindrome(string s) {
        string newS="";
        for(int i=s.length()-1;i>=0;i--){
            if(isalnum(s[i])){
                newS+=tolower(s[i]);
            }
        }
        return newS== string(newS.rbegin(),newS.rend());
    }
};
