// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int search(int nums[], int l, int r, int target){
    //complete the function here
    
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[l]<=nums[mid]){
                if(target<nums[mid] && target>=nums[l]){
                    r=mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            else{
                if(target<=nums[r] && target>nums[mid]){
                    l = mid+1;
                }
                else{
                    r=mid-1;
                }
            }
        }
        return -1;
    }
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends