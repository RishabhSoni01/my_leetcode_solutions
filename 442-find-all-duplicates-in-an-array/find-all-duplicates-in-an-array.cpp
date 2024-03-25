class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // for(auto num:nums){
        //     mp[num]++;
        // }
        // vector<int> ans;
        // for(auto x:mp){
        //     if(x.second==2){
        //         ans.push_back(x.first);
        //     }
        // }
        // return ans;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int index=abs(nums[i])-1;
            if(nums[index]<0){
                ans.push_back(abs(nums[i]));
            }

            nums[index]=nums[index]*(-1);
        }
        return ans;
    }
};