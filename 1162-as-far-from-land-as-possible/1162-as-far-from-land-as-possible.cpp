class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<int,int>> q;
        vector<vector<int>> visited=grid;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j]==1){
                    q.push({i,j});
                }
            }
        }
        if(q.size()>=n*n){
            return -1;
        }
        
        vector<pair<int,int>> dir={{0,1},{1,0},{0,-1},{-1,0}};
        int ans=-1;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                auto [x,y] = q.front();
                q.pop();

                for(auto [dx,dy]:dir){
                    int i=x+dx;
                    int j=y+dy;
                    if(i>=0 && i<n && j>=0 && j<m && visited[i][j]==0){
                        visited[i][j]=1;
                        q.push({i,j});
                    }
                }
            }
            ans++;
        }
        return ans;
    }
};