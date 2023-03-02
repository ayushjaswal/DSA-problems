class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        map<char, char> mp;
        if (s.size() != s.size())
        {
            return false;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (mp.count(s[i]))
            {
                if (mp[s[i]] != t[i])
                {
                    return false;
                }
            }
            else
            {
                for (int x = 0; x < i; x++)
                {
                    if (mp[s[x]] == t[i])
                    {
                        return false;
                    }
                }
                mp[s[i]] = t[i];
            }
        }
        return true;
    }
};