class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        if(sum%2!=0){return false;}
        else{
            return subset(nums,sum/2,n);
        }
    }
    bool subset(vector<int> nums,int sum,int n){
        vector<vector<int>> dp(n+1,vector<int>(sum+1));
        for(int i=0;i<sum+1;i++){
            dp[0][i]=false;
        }
        for(int j=0;j<n+1;j++){
            dp[j][0]=true;
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=max((dp[i-1][j-nums[i-1]]),(dp[i-1][j]));
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
};