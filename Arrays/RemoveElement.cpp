class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int left = 0, right = nums.size() - 1, temp;
        while (left <= right)
        {
            if (nums[left] == val)
            {
                if (nums[right] != val)
                {
                    temp = nums[right];
                    nums[right] = nums[left];
                    nums[left] = temp;
                    left++;
                    right--;
                }
                else
                {
                    right--;
                }
            }
            else
            {
                left++;
            }
        }
        return left;
    }
};