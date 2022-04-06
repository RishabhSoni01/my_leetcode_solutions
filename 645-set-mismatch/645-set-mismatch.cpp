class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int repeating;
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                repeating = nums[i];
                ans.push_back(repeating);
                break;
            }
        }
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        int missing_num;
        int total = (n*(n+1))/2;
        missing_num=total -sum+ repeating;
        ans.push_back(missing_num);
        return ans;
    }
};