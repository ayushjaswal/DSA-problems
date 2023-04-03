class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boatPair = 0, lo = 0, hi = people.size()-1;
        sort(people.begin(), people.end());
        if(people.size() == 0){
            return boatPair;
        }
        while(lo <= hi){
            int k = people[lo] + people[hi];
            if(lo == hi){
                boatPair++;
                break;
            }
            if(k <= limit){
                boatPair++;
                lo++;
                hi--;
            }
            else{
                if(people[hi] <= limit){
                    boatPair++;
                    hi--;
                }
                else{
                    hi--;
                }
            }
        }
        return boatPair;
    }
};