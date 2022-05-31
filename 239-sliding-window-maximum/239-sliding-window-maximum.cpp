class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<pair<int,int>> dq;
        int n=nums.size();
        for(int j=0;j<nums.size();j++){
            while(dq.size()>0 && dq.back().first<nums[j]){
                dq.pop_back();
            }
            dq.push_back({nums[j],j});
            if(j>=k-1){
                if(dq.front().second==j-k) dq.pop_front();
                ans.push_back(dq.front().first);
            }
        }
        return ans;
    }
};