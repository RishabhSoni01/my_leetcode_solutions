class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n=points.size();
        int mini=INT_MAX;
        int ans=-1,dist=0;
        for(int i=0;i<n;i++){
            if(points[i][0]==x || points[i][1]==y){
                dist = abs(x-points[i][0])+abs(y-points[i][1]);
                if(dist==mini){
                    continue;
                }
                else if(dist<mini){
                    mini=dist;
                    ans=i;
                }
            }
        }
        return ans;
    }
};