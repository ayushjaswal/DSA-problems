class Solution
{
public:
    int mySqrt(int x)
    {
        int l = 1, r = x;
        long long int ans;
        while (l <= r)
        {
            long long mid = l + (r - l) / 2;
            if (mid * mid == x)
            {
                ans = mid;
                break;
            }
            else if (mid * mid < x)
            {
                l = mid + 1;
                ans = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        return ans;
    }
};