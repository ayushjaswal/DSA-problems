//Complicated took help of youtube and resources!
//Medium Level problem!
class Solution {
public:
    string longestPalindrome(string s) {
        string res;
        int reslen = 0;

        for(int i = 0; i < s.size(); i++){
            //odd
            int l = i,  r = i;
            while (l >= 0 and r < s.size() && s[l] == s[r]){
                if(r - l + 1 > reslen){
                    res = s.substr(l, r + 1 - l);
                    reslen = r-l+1;
                }
                l--;
                r++;
            }
            l = i; r = i + 1;
            while (l >= 0 and r < s.size() && s[l] == s[r]){
                if(r - l + 1 > reslen){
                    res = s.substr(l, r + 1 - l);
                    reslen = r-l+1;
                }
                l--;
                r++;
            }
        }
        return res;
    }
};