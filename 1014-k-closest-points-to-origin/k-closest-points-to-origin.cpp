class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans(k);

        priority_queue<vector<int>> maxh;

        for(auto& p:points){
            int x=p[0],y=p[1];
            maxh.push({x*x+y*y,x,y});
            if(maxh.size()>k){
                maxh.pop();
            }
        }

        for(int i=0;i<k;i++){
            vector<int> a=maxh.top();
            maxh.pop();
            ans[i]={a[1],a[2]};
        }

        return ans;
    }
};