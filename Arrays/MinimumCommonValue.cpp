class Solution
{
public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        int min1, min2, i = 0, j = 0;
        min1 = nums1[0];
        min2 = nums2[0];
        while (i < nums1.size() && j < nums2.size())
        {
            if (min1 == min2)
            {
                return min1;
            }
            else
            {
                if (min1 < min2)
                {
                    min1 = nums1[i];
                    i++;
                }
                else
                {
                    min2 = nums2[j];
                    j++;
                }
                if (min1 == min2)
                {
                    return min1;
                }
            }
        }
        return -1;
    }
};