// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long countKdivPairs(int A[], int n, int k)
    {
        //code here
        unordered_map<int,int> m;
        long long count=0;
        for(int i=0;i<n;i++){
            int x=A[i]%k;
            int target = k-x;
            if(m.count(target)>0){
                count+=m[target];
            }
            m[x]++;
        }
        int count_0=m[0];
        count+=(count_0*(count_0-1))/2;
        return count;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends