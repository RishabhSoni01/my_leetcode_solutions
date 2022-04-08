class Solution {
public:
    int binaryGap(int n) {
        int count=0;
        int m = INT_MIN;
        while(n!=0){
            if((n&1)==1){
                count = max(m,count);
                m =0;
            }
            m +=1;
            n /=2;
        }
        return count;
    }
};