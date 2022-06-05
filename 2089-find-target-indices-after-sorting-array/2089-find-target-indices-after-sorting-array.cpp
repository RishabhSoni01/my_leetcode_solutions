class Solution {
public:
    vector<int> ans;
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int start=0;
        int end=n-1;
        binary(nums,target,start,end);
        return ans;
    }
    void binary(vector<int>& nums, int target,int start,int end){
        if(start>end){
            return;
        }
        int mid=start + (end-start)/2;
        if(nums[mid]==target){
            binary(nums,target,start,mid-1);
            ans.push_back(mid);
            binary(nums,target,mid+1,end);
        }
        else if(target<nums[mid]){
            binary(nums,target,start,mid-1);
        }
        else{
            binary(nums,target,mid+1,end);
        }
    }
};