class Solution
{
public:
    string reverseVowels(string s)
    {
        int i = 0, j = s.size(), k = 0;
        vector<char> store;
        for (; i < j; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                store.push_back(s[i]);
            }
        }
        reverse(store.begin(), store.end());
        for (int i = 0; i < j; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                s[i] = store[k++];
            }
        }
        return s;
    }
};