class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        vector<int> ans(n1,-1);
        stack<int> q;
        unordered_map<int,int> m;
        for(auto num  : nums2){
            while(!q.empty() && q.top()<num){
                m[q.top()] = num;
                q.pop();
            }
            q.push(num);
        }
        for(int i=0;i<n1;i++){
            if(m[nums1[i]]){
                ans[i] = m[nums1[i]];
            }
        }
        return ans;
    }
};