class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> strs;
        int len = nums.size();
        if (len == 0)
        {
            return strs;
        }
        int a = nums[0], n;
        n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (i == n - 1 || nums[i] + 1 != nums[i + 1])
            {
                if (a != nums[i])
                {
                    strs.push_back(to_string(a) + "->" + to_string(nums[i]));
                }
                else
                {
                    strs.push_back(to_string(a));
                }
                if (i != n - 1)
                {
                    a = nums[i + 1];
                }
            }
        }
        return strs;
    }
};