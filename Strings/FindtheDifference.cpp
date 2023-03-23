class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s.size()){
            for(int i = 0; i < t.size(); i++){
                if(s[i] != t[i]){
                    return t[i];
                }
            }
        }
        return t[0];
    }
};