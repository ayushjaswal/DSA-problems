// medium level problem
class Solution
{
public:
    int reverse(int x)
    {
        string s;
        int result;
        s = to_string(abs(x));
        std::reverse(s.begin(), s.end());
        stringstream obj;
        obj << s;
        obj >> result;
        cout << result;
        if (result >= INT_MAX || result <= INT_MIN)
        {
            return 0;
        }
        if (x > 0)
        {
            return result;
        }
        else
        {
            return -result;
        }
    }
};