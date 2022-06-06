// { Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}
// } Driver Code Ends


pair<int, int> getFloorAndCeil(int nums[], int n, int x) {
    // code here
    sort(nums,nums+n);
    for(int i=0;i<n;i++){
        if(nums[0]>x){
             return {-1,nums[0]};
        }
        if(nums[n-1]<=x){
            return {nums[n-1],-1};
        }
        if(nums[i]<x && nums[i+1]>x){
            return {nums[i],nums[i+1]};
        }
    }
    return {x,x};
}