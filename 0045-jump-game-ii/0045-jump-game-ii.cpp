class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size()-1;
        int prev=-1,curr=0;         //prev -> curr
        int count=0;
        for(int i=0;curr<n;i++){
            if(i>prev){
                count++;
                prev=curr;  
            }
            curr=max(curr,nums[i]+i); //nums[i+j]==nums[i]+i
        }
        return count;
    }
};