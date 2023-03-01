class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        s = s.strip()
        s = s[::-1]
        count= 0
        i = 0
        while(i < len(s) and s[i] != " "):
            count += 1
            i += 1
        return count