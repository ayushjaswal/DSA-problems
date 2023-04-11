class Solution {
public:
    string removeStars(string s) {
        string p;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '*'){
                p.pop_back();
            }
            else{
                p.push_back(s[i]);
            }
        }
        return p;
    }
};