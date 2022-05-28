class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh1;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh2;
        int n=nums.size();
        for(int i=0;i<n;i++){
            minh1.push({nums[i],i});
            if(minh1.size()>k){
                minh1.pop();
            }
        }
        while(!minh1.empty()){
            minh2.push({minh1.top().second,minh1.top().first});
            minh1.pop();
        }
        while(!minh2.empty()){
            ans.push_back(minh2.top().second);
            minh2.pop();
        }
        return ans;
    }
};