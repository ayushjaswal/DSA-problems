class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        int i = 0;
        sort(nums.begin(), nums.end(), greater<int>());
        while (i < nums.size())
        {
            if (count(nums.begin(), nums.end(), nums[i]) > 1)
            {
                nums.erase(nums.begin() + i);
            }
            else
            {
                i++;
            }
        }
        if (nums.size() < 3)
        {
            return nums[0];
        }
        else
        {
            return nums[2];
        }
    }
};