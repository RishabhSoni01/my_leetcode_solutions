class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int flag=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                flag++;
            }
            else{
                prod= prod*nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(flag==0){
                nums[i]=prod/nums[i];
            }
            else if(flag>1){
                nums[i]=0;
            }
            else if(flag==1 && nums[i]!=0){
                nums[i]=0;
            }
            else{
                nums[i]=prod;
            }
        }
        return nums;
    }
};