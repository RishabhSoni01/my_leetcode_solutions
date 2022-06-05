class Solution {
public:
    vector<int> ans;
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int res1=first_occur(nums,target);
        int res2=second_occur(nums,target);
        ans.push_back(res1);
        ans.push_back(res2);
        return ans;
    }
    int first_occur(vector<int>& nums, int target){
            int res=-1;
            int n=nums.size();
            int start=0;
            int end=n-1;
            while(start<=end){
                int mid=start + (end-start)/2;
                if(nums[mid]==target){
                    res=mid;
                    end=mid-1;
                }
                else if(target<nums[mid]){
                    end=mid-1;
                }
                else{
                    start = mid+1;
                }
            }  
            return res;
    }
    int second_occur(vector<int>& nums, int target){
            int res=-1;
            int n=nums.size();
            int start=0;
            int end=n-1;
            while(start<=end){
                int mid=start + (end-start)/2;
                if(nums[mid]==target){
                    res=mid;
                    start=mid+1;
                }
                else if(target<nums[mid]){
                    end=mid-1;
                }
                else{
                    start = mid+1;
                }
            }
            return res;
    }
};