class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int n = nums.size(), first = 0, last = n - 1, mid;
        vector<int> res = {-1, -1};
        if (n == 0)
        {
            return {-1, -1};
        }
        while (first <= last)
        {
            mid = (first + (last)) / 2;
            if (nums[mid] < target)
            {
                first = mid + 1;
            }
            else if (nums[mid] > target)
            {
                last = mid - 1;
            }
            else
            {
                res[0] = mid;
                last = mid - 1;
            }
        }
        first = 0;
        last = n - 1;
        while (first <= last)
        {
            mid = (first + (last)) / 2;
            if (nums[mid] < target)
            {
                first = mid + 1;
            }
            else if (nums[mid] > target)
            {
                last = mid - 1;
            }
            else
            {
                res[1] = mid;
                first = mid + 1;
            }
        }

        return res;
    }
};