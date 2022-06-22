class Solution {
    public:
    int min(int a,int b){
        return a<b?a:b;
    }
    int superEggDrop(int k, int n) {
        vector<vector<int>> memo(k+1,vector<int> (n+1,-1));
        return eggdrop(k,n,memo);
    }
    int eggdrop(int k,int n,vector<vector<int>> &memo){
        if(memo[k][n]!=-1){return memo[k][n];}
        if(n==1 || n==0){
            return n;
        }
        if(k==1){
            return n;
        }
        int l=1,h=n,temp=0;
        int ans;
        
        while(l<=h)
        {
            int mid=(l+h)/2;
            int left=eggdrop(k-1,mid-1,memo);   
            int right=eggdrop(k,n-mid,memo) ;   
            temp=1+max(left,right);        
            if(left<right){                  
              l=mid+1;                      
            }
            else                          
            {    
                h=mid-1;
            }
            ans=min(ans,temp);              
        }
        return memo[k][n]=ans;
    }
};