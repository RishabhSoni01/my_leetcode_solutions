// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int p=0;
        int q=0;
        int r=n-1;
        while(q<=r){
            if(a[q]==0){
                swap(a[q++],a[p++]);
            }
            else if(a[q]==1){
                q++;
            }
            else if(a[q]==2){
                swap(a[q],a[r--]);
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends