class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> s;

        for (int i = 0; i < nums1.size(); i++)
        {
            if (count(nums2.begin(), nums2.end(), nums1[i]))
            {
                auto it = find(nums2.begin(), nums2.end(), nums1[i]);
                s.push_back(nums1[i]);
                nums2.erase(it);
            }
        }

        return s;
    }
};