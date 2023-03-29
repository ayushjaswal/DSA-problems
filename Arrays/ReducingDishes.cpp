// hard level leetcode
class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int resSum = 0, n = satisfaction.size()-1;
        vector <int> resSumStore;
        sort(satisfaction.begin(), satisfaction.end());
        if(n == 0){
            resSum = satisfaction[n];
            resSumStore.push_back(resSum);
        }
        while(n > 0){
            n = satisfaction.size()-1;
            resSum = 0;
            for(int i = 1; i <= n+1; i++){
                resSum += i*satisfaction[i-1];
            }
            resSumStore.push_back(resSum);
            satisfaction.erase(satisfaction.begin());
        }
        int max_elm = *max_element(resSumStore.begin(), resSumStore.end());
        if(max_elm < 0){
            return 0;
        }
        else{
            return  max_elm;
        }
    }
};