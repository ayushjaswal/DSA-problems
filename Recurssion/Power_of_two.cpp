class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int x;
        if (n == 1)
        {
            return true;
        }
        else
        {
            if (n % 2 != 0 || n == 0)
            {
                return false;
            }
            return isPowerOfTwo(n / 2);
        }
    }
};