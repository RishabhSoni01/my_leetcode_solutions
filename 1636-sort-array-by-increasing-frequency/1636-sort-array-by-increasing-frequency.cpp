class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>> maxh;
        for(auto i:mp){
            maxh.push({-i.second,i.first});
        }
        while(maxh.size()>0){
            int freq = maxh.top().first;
            int val = maxh.top().second;
            for(int i=0;i<abs(freq);i++){
                ans.push_back(val);
            }
            maxh.pop();
        }
        
        return ans;
    }
};