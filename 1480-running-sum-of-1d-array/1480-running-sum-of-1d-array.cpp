class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int cursum;
        int n=nums.size();
        for(int i=0;i<n;i++){
            cursum += nums[i];
            ans.push_back(cursum);
        }
        return ans;
    }
};