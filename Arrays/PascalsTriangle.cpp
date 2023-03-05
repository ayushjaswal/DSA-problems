class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ptri;
        vector<int> p;
        p.push_back(1);
        ptri.push_back(p);
        if (numRows == 1)
        {
            return ptri;
        }
        else if (numRows == 0)
        {
            ptri.empty();
            return ptri;
        }
        p.push_back(1);
        ptri.push_back(p);
        p.clear();
        for (int i = 2; i < numRows; i++)
        {
            p.push_back(1);
            p.push_back(1);
            for (int k = 1; k < i; k++)
            {
                p.insert(p.begin() + k, (ptri[i - 1][k - 1] + ptri[i - 1][k]));
            }
            ptri.push_back(p);
            p.clear();
        }

        return ptri;
    }
};