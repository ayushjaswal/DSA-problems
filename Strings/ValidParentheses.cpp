class Solution
{
public:
    bool isValid(string s)
    {
        string bracs;
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] == 40 || s[i] == 123 || s[i] == 91))
            {
                bracs.push_back(s[i]);
            }
            else if (s[i] == 93)
            {
                if (bracs.back() == 91)
                {
                    bracs.pop_back();
                }
                else
                {
                    return false;
                }
            }
            else if (s[i] == 41)
            {
                if (bracs.back() == 40)
                {
                    bracs.pop_back();
                }
                else
                {
                    cout << bracs.back();
                    return false;
                }
            }
            else if (s[i] == 125)
            {
                if (bracs.back() == 123)
                {
                    bracs.pop_back();
                }
                else
                {
                    return false;
                }
            }
        }
        if (bracs.size() > 0)
        {
            return false;
        }
        return true;
    }
};