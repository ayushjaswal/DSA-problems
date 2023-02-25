class Solution
{
public:
    bool isPalindrome(int x)
    {
        int n = 0, temp = x;
        do
        {
            temp = temp / 10;
            n++;
        } while (temp != 0);
        int arr[n], arr_rev[n];
        temp = x;
        for (int i = 0, j = n - 1; i < n; i++, j--)
        {
            arr[i] = temp % 10;
            arr_rev[j] = temp % 10;
            temp = temp / 10;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr_rev[i] != arr[i] || x < 0)
            {
                return false;
            }
        }
        return true;
    }
};