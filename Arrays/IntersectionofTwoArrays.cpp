class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        // sort(nums1.begin(), nums1.end());
        // sort(nums2.begin(), nums2.end());
        // unique(nums1.begin(), nums1.end());
        // unique(nums2.begin(), nums2.end());
        vector<int> s;

        for (int i = 0; i < nums1.size(); i++)
        {
            if (count(nums2.begin(), nums2.end(), nums1[i]) && (count(s.begin(), s.end(), nums1[i]) == 0))
            {
                s.push_back(nums1[i]);
            }
        }
        return s;
    }
};