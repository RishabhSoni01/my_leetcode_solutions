class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        else if(n==1 || n==2){
            return 1;
        }
        long a=0;
        long b=1;
        long c;
        for(int i=2;i<n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return a+b;
            
    }
};