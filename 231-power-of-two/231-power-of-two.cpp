class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
              return true;
        }
        else if(n&1!=0 || n==0){
            return false;
        }
        return isPowerOfTwo(n>>1);
     }
};