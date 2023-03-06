class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int maxelm = 0, i = 0, j = nums.size() - 1;
        while (i <= j)
        {
            if (count(nums.begin(), nums.end(), nums[i]) > nums.size() / 2)
            {
                maxelm = nums[i];
                break;
            }
            if (count(nums.begin(), nums.end(), nums[j]) > nums.size() / 2)
            {
                maxelm = nums[j];
                break;
            }
            i++;
            j--;
        }
        return maxelm;
    }
};