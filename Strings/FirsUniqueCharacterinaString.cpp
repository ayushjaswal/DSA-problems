class Solution
{
public:
    int firstUniqChar(string s)
    {
        map<char, int> mp;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (mp.count(s[i]))
            {
                mp[s[i]] += 1;
            }
            else
            {
                mp[s[i]] = 1;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (mp[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};