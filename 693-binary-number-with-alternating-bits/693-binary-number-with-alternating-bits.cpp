class Solution {
public:
    bool hasAlternatingBits(int n) {
        int a = n&1;
        while(n){
            n = n>>1;
            int b = n&1;
            if(a==b){
                return false;
            }
            a=b;
        }
        return true;
    }
};