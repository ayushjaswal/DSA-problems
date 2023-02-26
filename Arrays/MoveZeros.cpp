class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int left = 0, right = 0, temp;
        while (right < nums.size() && nums.size() > 1)
        {
            if (nums[right] != 0)
            {
                temp = nums[left];
                nums[left] = nums[right];
                nums[right] = temp;
                left++;
                right++;
            }
            else
            {
                right++;
            }
        }
    }
};