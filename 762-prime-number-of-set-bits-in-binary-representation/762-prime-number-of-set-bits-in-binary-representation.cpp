class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        int count;
        for(int i=left;i<=right;i++){
            count = countbits(i);
            if(checkprime(count)){
                ans +=1;
            }
        }
        return ans;
    }
    int countbits(int n){
        int count=0;
        while(n){
            n = n&(n-1);
            count++;
        }
        return count;
    }
    bool checkprime(int n){
        if(n<=1){
            return false;
        }
        int i=2;
        
        while(i <= n/2){
            if(n%i == 0){
                return false;
            }
            i++;
        }
        return true;
    }
};