class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            int length=ans.size();
            int subnetmask=1<<(i-1);
            for(int j=length-1;j>=0;j--){
                ans.push_back(ans[j]+subnetmask);
            }
        }
        return ans;
    }
};