class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            int prev = (mid-1+n)%n;
            int next = (mid+1)%n;
            if(nums[mid]<=nums[prev] and nums[mid]<=nums[next]){
                return nums[mid];
            }
            else if(nums[mid]>=nums[0]){
                l = mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return nums[0];
    }
};