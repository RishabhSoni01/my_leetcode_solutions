class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans;
        int i=0,j=0,n=nums.size();
        unordered_map<int,int> m;
        int count=0;
        int sum=0;
        while(i<n){
            sum += nums[i];
            if(sum == k){
                count++;
            }
            if(m.find(sum-k)!=m.end()){
                count += m[sum-k];
            }
            m[sum] += 1;
            i++;
        }
        return count;
    }
};