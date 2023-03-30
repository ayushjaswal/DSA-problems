// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int res, hi = n, lo = 0, mid, ans;
        if(n == 1 && isBadVersion(n)){
            return n;
        }
        while(lo <= hi){
            mid = (lo + hi)/2;
            if(isBadVersion(mid)){
                ans = mid;
                hi = mid -1;
            }
            else{
                lo = mid + 1;
            }
        }
        return ans;
    }
};