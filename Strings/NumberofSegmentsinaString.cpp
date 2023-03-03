class Solution
{
public:
    int countSegments(string s)
    {
        stringstream iss(s);
        string word;
        vector<string> str;

        while (iss >> word)
        {
            str.push_back(word);
        }

        return str.size();
    }
};