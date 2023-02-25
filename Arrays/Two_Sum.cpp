class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int i, key, j;
        // for (i = 1; i < nums.size(); i++){
        // key = nums[i];
        // j = i - 1;
        // while (j >= 0 && nums[j] > key){
        //     nums[j + 1] = nums[j];
        //     j = j - 1;
        //     }
        // nums[j + 1] = key;
        // }
        // int left = 0, right = nums.size() -1;
        // while(left < right){
        //     if(nums[left] + nums[right] > target){
        //         right--;
        //     }
        //     else if(nums[left] + nums[right] < target){
        //         left++;
        //     }
        //     else{
        //         return{left, right};
        //     }
        // }


        for(int i=0; i<nums.size(); i++){
            for(int j= i + 1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};