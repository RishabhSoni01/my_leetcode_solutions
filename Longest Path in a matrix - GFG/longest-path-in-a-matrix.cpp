// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int findMax(int i, int j, vector<vector<int>> &m, int tar,vector<vector<int>>&dp)
    {
    if (i < 0 || j < 0 || i >= m.size() || j >= m[0].size() || tar >= m[i][j])
    {
        return -1;
    }        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>> &m)
    {
        int ans = -1;
        vector<pair<int, pair<int, int>>> v;
        for (int i = 0; i < m.size(); i++)
        {
            for (int j = 0; j < m[0].size(); j++)
            {
                v.push_back({m[i][j], {i, j}});
            }
        }
        sort(begin(v), end(v));
        vector<vector<int>> dp(m.size(), vector<int>(m[0].size(), -1));
        for (int i = v.size() - 1; i >= 0; i--)
        { 
            int x=v[i].second.first ;
            int y=v[i].second.second ;
dp[x][y] = max(max(findMax(x + 1, y, m, m[x][y],dp), findMax(x - 1, y, m, m[x][y],dp)), max(findMax(x, y + 1, m, m[x][y],dp), findMax(x, y - 1, m, m[x][y],dp)));
            if (dp[x][y] < 0)
            {
                dp[x][y] = 1;
            }
            else
            {
                dp[x][y] += 1;
            }
             
            ans = max(ans, dp[x][y]);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)cin >> matrix[i][j];
		Solution obj;
		int ans = obj.longestIncreasingPath(matrix);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends