class Solution {
public:
    int takeCharacters(string s, int k) {
        int counta=0,countb=0,countc=0;
        int n=s.size();
        int ans=n;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                counta++;
            }
            if(s[i]=='b'){
                countb++;
            }
            if(s[i]=='c'){
                countc++;
            }

        }
        if(counta<k || countb<k || countc<k)return -1;

        int left=n-1,right=n-1;
        while(left>=0){
            if(s[left]=='a')counta--;
            if(s[left]=='b')countb--;
            if(s[left]=='c')countc--;
            while(counta<k || countb<k || countc<k){
                if(s[right]=='a')counta++;
                if(s[right]=='b')countb++;
                if(s[right]=='c')countc++;
                right--;
            }
            ans=min(ans,left+n-1-right);
            left--;
        }
        return ans;
    }
};