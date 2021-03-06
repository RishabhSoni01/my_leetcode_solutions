// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long left= 0,right=n;
        long long mid;
        while(left<right){
            mid = (left + right)/2;
            if(isBadVersion(mid)){
                right = mid;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }
};