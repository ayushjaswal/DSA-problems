class Solution {
public:
    int partitionString(string s) {
        int parts = 1;
        string::iterator k= s.begin();
        for(int i=1; i<s.size();i++){
            if(count(k, s.begin() + i, s[i])){
                parts++;
                k = s.begin() + i ;
            }
        }
        return parts;
    }
};