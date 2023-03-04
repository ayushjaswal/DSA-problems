class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int l = 0, r = 1, max = 0;
        while (r < prices.size())
        {
            if (prices[l] > prices[r])
            {
                l = r;
                r++;
            }
            else
            {
                if (max < (prices[r] - prices[l]))
                {
                    max = prices[r] - prices[l];
                }
                r++;
            }
        }
        return max;
    }
};