class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int store=0;
        sort(nums.begin(), nums.end());
        int result = INT_MAX, n = nums.size(), a;
        for(int i = 0; i < n; i++){
            a = target - nums[i];
            int p = i + 1, q = n - 1;
            while(p<q){
                if(abs(nums[p] + nums[q] + nums[i] - target) <= result){
                    store = nums[p] + nums[q] + nums[i];
                    result = abs(nums[p] + nums[q] + nums[i] - target);
                }
                if(nums[i] + nums[p] + nums[q] > target){
                    q--;
                }
                else{
                    p++;
                }
                
            }
        }
        return store;
    }
};