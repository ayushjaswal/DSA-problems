class Solution
{
public:
    bool isSameAfterReversals(int num)
    {
        string numberstr;
        int result;
        numberstr = to_string(abs(num));
        std::reverse(numberstr.begin(), numberstr.end());
        stringstream obj;
        obj << numberstr;
        obj >> result;
        cout << result;
        numberstr = to_string(abs(result));
        std::reverse(numberstr.begin(), numberstr.end());
        stringstream obj2;
        obj2 << numberstr;
        obj2 >> result;
        // cout << result;
        if (result == num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};