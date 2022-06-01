// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<pair<int,int>> temp;
    void function(int N,int start,int end,int mid){
        if(N==0)return;
        function(N-1,start,mid,end);
        temp.push_back({start,end});
        function(N-1,mid,end,start);
    }
    vector<int> shiftPile(int N, int n){
        // code here
        function(N,1,3,2);
        vector<int> ans;
        ans.push_back(temp[n-1].first);
        ans.push_back(temp[n-1].second);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends