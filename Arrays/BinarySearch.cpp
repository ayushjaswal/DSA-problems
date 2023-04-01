class Solution {
public:
    int search(vector<int>& nums, int target) {
        int hi = nums.size() - 1, lo = 0, res, mid;
        mid = (lo + hi) / 2;
        while(lo <= hi){
            mid = (lo + hi) / 2;
            if(nums[mid] > target){
                hi = mid - 1;
            }
            else if(nums[mid] < target){
                lo = mid + 1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};