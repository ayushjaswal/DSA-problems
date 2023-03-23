class Solution
{
public:
    int findMiddleIndex(vector<int> &nums)
    {
        int middleIndex = 0, leftSum = 0, rightSum = 0, sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        while (middleIndex < nums.size())
        {
            if (middleIndex > 0)
            {
                leftSum += nums[middleIndex - 1];
                rightSum = sum - leftSum - nums[middleIndex];
                if (leftSum == rightSum)
                {
                    return middleIndex;
                }
                cout << rightSum << " " << leftSum << endl;
            }
            else
            {
                rightSum = sum - nums[middleIndex];
                if (leftSum == rightSum)
                {
                    return middleIndex;
                }
            }
            middleIndex++;
        }
        if (nums.size() <= 1 || middleIndex == 0 || middleIndex == nums.size() - 1)
        {
            return 0;
        }
        return -1;
    }
};