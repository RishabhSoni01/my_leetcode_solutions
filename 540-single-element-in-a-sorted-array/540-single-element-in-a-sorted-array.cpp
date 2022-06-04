class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int mid,num;
        while(left<right){
            mid = left + (right-left)/2;
            num = mid%2==0 ? mid+1 : mid-1;
            if(nums[num]==nums[mid]){
                left=mid+1;
            }
            else{
                right = mid;
            }
        }
        return nums[left];
    }
};