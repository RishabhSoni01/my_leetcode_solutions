class Solution {
public:
    unordered_map<int,int> m;
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
            int n=nums.size();
            for(int i=0;i<n;i++){
                m[nums[i]]=i;
            }
            for(vector<int> a:operations){
                m[a[1]]=m[a[0]];
                m[a[0]]=-1;
            }
            for(auto i:m){
                if(i.second>=0){
                    nums[i.second]=i.first;
                }
            }
        return nums;
        
    }
};/*
for(int i=0 ; i < nums.size() ; i++) mp[nums[i]] = i; //Save position of each value
        for(vector<int> a : operations) mp[a[1]] = mp[a[0]] , mp[a[0]] = -1; 
		// When a-> b we give position of a to b, mark that a is not in the array anymore
        for(auto i : mp)
            if(i.second >= 0) // If value is in array
                nums[i.second] = i.first;
        return nums;*/