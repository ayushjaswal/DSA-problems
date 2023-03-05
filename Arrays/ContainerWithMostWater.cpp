class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0, max = 0, j = height.size() - 1;
        ;
        while (i < j)
        {
            if ((j - i) * min(height[i], height[j]) > max)
            {
                max = (j - i) * min(height[i], height[j]);
                if (min(height[i], height[j]) == height[i])
                {
                    i++;
                }
                else
                {
                    j--;
                }
            }
            else
            {
                if (min(height[i], height[j]) == height[i])
                {
                    i++;
                }
                else
                {
                    j--;
                }
            }
        }
        return max;
    }
};