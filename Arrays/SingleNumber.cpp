class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int val;
        for (int i = 0; i < nums.size(); i++)
        {
            if (count(nums.begin(), nums.end(), nums[i]) == 1)
            {
                val = nums[i];
            }
        }
        return val;
    }
};