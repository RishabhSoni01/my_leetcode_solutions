class Solution {
public:
    int lastRemaining(int n) {
        bool flag=true;
        int head=1,step=1;
        while(n>1){
            if(flag){
                head+=step;
            }
            else{
                head+= n%2==0?0:step;
            }
            step*=2;
            n/=2;
            flag=!flag;
        } 
        return head;
    }
};