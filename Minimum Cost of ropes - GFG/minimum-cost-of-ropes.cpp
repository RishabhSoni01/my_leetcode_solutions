// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        priority_queue<long long,vector<long long>,greater<long long>> minh;
        long long tcost=0;
        for(long long i=0;i<n;i++){
            minh.push(arr[i]);
        }
        while(minh.size()>=2){
            long long first = minh.top();
            minh.pop();
            long long second = minh.top();
            minh.pop();
            tcost = tcost + first + second;
            minh.push(first+second);
        }
        return tcost;
    }
};


// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends