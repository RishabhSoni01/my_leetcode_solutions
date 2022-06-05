// { Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int num[], int n, int x) {
	    // code here
	    int a=-1,b=-1,l=0,h=n-1;
	    while(l<=h){
	        int mid=l+(h-l)/2;
	        if(x==num[mid]){
	            a=mid;
	            h=mid-1;
	        }
	        else if(x<num[mid]){
	            h=mid-1;
	        }
	        else{
	            l=mid+1;
	        }
	    }
	    l=0;h=n-1;
	    while(l<=h){
	        int mid=l+(h-l)/2;
	        if(x==num[mid]){
	            b=mid;
	            l=mid+1;
	        }
	        else if(x<num[mid]){
	            h=mid-1;
	        }
	        else{
	            l=mid+1;
	        } 
	    }
	    if(a==-1 and b==-1)return 0;
	    return b-a+1;
	}
};

// { Driver Code Starts.

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
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends