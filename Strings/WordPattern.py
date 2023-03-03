class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        lsts = s.split(" ")
        dic = {}
        if len(pattern) != len(lsts):
            return False
        for i in range(len(pattern)):
            if pattern[i] in dic:
                if dic[pattern[i]] != lsts[i]:
                    return False
            dic[pattern[i]] = lsts[i]
        val_list = list(dic.values())
        for i in range(len(val_list)):
            if val_list.count(val_list[i]) > 1:
                return False
        return True