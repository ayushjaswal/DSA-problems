class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        map<char, int> mp1, mp2;
        for (int i = 0; i < ransomNote.size(); i++)
        {
            if (mp1.count(ransomNote[i]))
            {
                mp1[ransomNote[i]]++;
            }
            else
            {
                mp1[ransomNote[i]] = 1;
            }
        }
        for (int i = 0; i < magazine.size(); i++)
        {
            if (mp2.count(magazine[i]))
            {
                mp2[magazine[i]]++;
            }
            else
            {
                mp2[magazine[i]] = 1;
            }
        }
        for (int i = 0; i < ransomNote.size(); i++)
        {
            if (mp2.count(ransomNote[i]))
            {
                if (mp2[ransomNote[i]] < mp1[ransomNote[i]])
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};