// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        vector<int> ans;
        priority_queue<pair<int,int>> maxh;
        for(int i=0;i<n;i++){
            
            int t=abs(arr[i]-x);
            if(t!=0){
                maxh.push({t,-1*arr[i]});
            }
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        
        while(maxh.size()>0){
            ans.push_back(-1*(maxh.top().second));
            maxh.pop();            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends