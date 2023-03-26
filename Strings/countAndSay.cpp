class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        if(n == 2) return "11";
        string str = "11";
        for(int i = 3; i <= n; i++){
            string temp = "";
            int counter = 1;
            for(int j = 1; j <= str.size(); j++)
            {   if(str[j] == str[j-1]){
                    counter++;
                }
                else{
                    temp = temp + to_string(counter) + str[j-1];
                    counter = 1;
                }
            }
            str = temp;
        }
        return str;
    }
};