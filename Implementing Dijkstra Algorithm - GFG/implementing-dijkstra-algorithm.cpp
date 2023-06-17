//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        //priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        set<pair<int,int>> st;
        vector<int> distance(V,1e9);
        
        distance[S]=0;
        //pq.push({0,S});
        st.insert({0,S});
        while(!st.empty()){
            auto it=*(st.begin());
            int dis=it.first;
            int node=it.second;
            st.erase(it);
            for(auto i:adj[node]){
                int adjnode=i[0];
                int edgeweight=i[1];
                if(dis+edgeweight<distance[adjnode]){
                    if(distance[adjnode]!=1e9){
                        st.erase({distance[adjnode],adjnode});
                    }
                    distance[adjnode]=dis+edgeweight;
                    st.insert({distance[adjnode],adjnode});
                }
            }
        }
        // while(!pq.empty()){
        //     int dis=pq.top().first;
        //     int node=pq.top().second;
        //     pq.pop();
        //     for(auto it:adj[node]){
        //         int edgeweight=it[1];
        //         int adjnode=it[0];
        //         if(dis+edgeweight<distance[adjnode]){
        //             distance[adjnode]=dis+edgeweight;
        //             pq.push({distance[adjnode],adjnode});
        //         }
        //     }
        // }
        return distance;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends