class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s.size() != t.size())
        {
            return false;
        }
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] != s[i])
            {
                return false;
            }
        }
        return true;
    }
};