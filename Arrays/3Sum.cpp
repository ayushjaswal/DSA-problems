// medium Level Problem
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int a = nums[i];
            int t = -a;
            int p = i + 1, q = n - 1;
            while (p < q)
            {
                if (nums[p] + nums[q] == t)
                {

                    result.push_back({nums[i], nums[p], nums[q]});
                    while (p + 1 < q && nums[p] == nums[p + 1])
                        p++;
                    // while(p+1<q && nums[q] == nums[q+1]) q--;
                    q--;
                    p++;
                }
                else if (nums[p] + nums[q] > t)
                {
                    q--;
                }
                else
                {
                    p++;
                }
            }
            while (i + 1 < n && nums[i + 1] == nums[i])
                i++;
        }
        return result;
    }
};