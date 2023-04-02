class Solution:
    def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
        potions.sort()
        poSize = len(potions)
        resPair = [0] * len(spells)
        for i in range(len(spells)):
            hi = poSize - 1
            lo = 0
            res = poSize
            while(hi >= lo):
                mid = (hi + lo)//2
                if(spells[i] * potions[mid] >= success):
                    res = mid
                    hi = mid-1             
                    #break
                else:
                    lo = mid + 1                
            resPair[i] = (poSize - res)
        return resPair