class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        store = n
        print(store)
        lst = []
        while(n != 1):
            if n == 7:
                return True
            count = 0
            val = n
            while(int(val) > 0):
                temp = val % 10
                val = val//10
                count += temp ** 2
            print(count)
            lst.append(n)
            if(count == store or count in lst):
                print(lst)
                return False
            n = count
        return True