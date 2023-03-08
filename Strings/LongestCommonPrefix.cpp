//BRUTE FORCE METHOD
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string first = strs[0];
        for (int i = 1; i < strs.size(); i++)
        {
            for (int j = 0; j < first.size(); j++)
            {
                if (j == strs[i].size() || first[j] != strs[i][j])
                {
                    first = first.substr(0, j);
                    break;
                }
            }
        }
        return first;
    }
};