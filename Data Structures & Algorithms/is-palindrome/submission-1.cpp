class Solution {
public:
    bool isPalindrome(string s) {
        int l,h;
        l=0;
        h=s.length()-1;
        int len= s.length();
        while(l<h){
            while(l<h && !isalnum(s[l])) l++;
            while(l<h && !isalnum(s[h])) h--;

            if(tolower(s[l]) != tolower(s[h])) return false;
            l++;
            h--;
        }
        return true;
    }

    bool isalnum(char c){
        return (c>= 'A' && c<='Z' || c>= 'a' && c<='z' || c>='0' && c<='9'); 
    }
};
