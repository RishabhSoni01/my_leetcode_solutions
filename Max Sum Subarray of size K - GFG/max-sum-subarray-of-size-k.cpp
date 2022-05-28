// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    long long maximumSumSubarray(int k, vector<int> &arr , int n){
        // code here 
        long long winsum=0;
        long long maxsum=LONG_LONG_MIN;
        for(int i=0;i<k;i++){
            winsum += arr[i];
        }
        maxsum = winsum;
        for(int i=0;i<n-k;i++){
            winsum = winsum - arr[i] + arr[i+k];
            maxsum = max(maxsum, winsum);
        }
        return maxsum;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends