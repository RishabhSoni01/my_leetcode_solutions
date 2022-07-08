class Solution {
    bool isCycle(vector<vector<int>> &adj,vector<int> &vis,int node ){
        if(vis[node]==1)
            return true;
        if(vis[node]==0){
            vis[node]=1;
            for(auto edge : adj[node]){
                if(isCycle(adj,vis,edge))
                    return true;
            }
        }
        vis[node] = 2;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> vis(numCourses,0);
        vector<vector<int>> adj(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        for(int i=0;i<numCourses;i++){
            if(vis[i]==0){
                if(isCycle(adj,vis,i)){
                    return false;
                }
            }
        }
        return true;
     }
};

/*bool iscycle(vector<int> adj[],vector<int> &vis,int id){
        if(vis[id]==1)
            return true;
        if(vis[id]==0){
            vis[id]=1;
            for(auto edge : adj[id]){
                if(iscycle(adj,vis,edge))
                    return true;
            }
        }
        vis[id] = 2;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int> adj[n];
        for(auto edge : pre)
            adj[edge[1]].push_back(edge[0]);
        vector<int> vis(n,0);
        
        for(int i=0;i<n;i++){
            if(iscycle(adj,vis,i))
                return false;
        }
        return true;
    }*/