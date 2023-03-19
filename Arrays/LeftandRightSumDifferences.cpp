class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector <int> leftSum, rightSum, answer;
        int lSum = 0, rSum = 0;
        for(int i = 0; i < nums.size(); i++){
            leftSum.push_back(lSum);
            lSum += nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            rightSum.push_back(rSum);
            rSum += nums[nums.size() - 1 -i];
        }
        reverse(rightSum.begin(), rightSum.end());
        for(int i = 0; i < nums.size(); i++){
            answer.push_back(abs(leftSum[i] - rightSum[i]));
        }
        return answer;
    }
};