class Solution {
public:
    vector<vector<int>> dp;
    int solve(vector<int> &nums,int index,int prev){
        if(index==nums.size()){
            return 0;
        }
        if(dp[index][prev+1]!=-1)return dp[index][prev+1];

        int take=0,dontTake=solve(nums,index+1,prev);
        if(prev==-1 || nums[index]>nums[prev]){
            take=1+solve(nums,index+1,index);
        }
        return dp[index][prev+1]=max(take,dontTake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        dp.resize(n,vector<int>(n+1,-1));
        return solve(nums,0,-1);
    }
};