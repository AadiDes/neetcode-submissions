class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(string s: strs) res+= to_string(s.length())+'#'+s;
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        for(int i=0;i<s.length();){
            int j=i;
            while(s[j]!='#') j++;

            int len=stoi(s.substr(i,j-i));
            res.push_back(s.substr(j+1,len));
            i=j+len+1;
        }       
        return res;
    }
};
