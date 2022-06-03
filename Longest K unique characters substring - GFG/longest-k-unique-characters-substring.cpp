// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int j=0;
        int i=0;
        int ans=-1;
        int count=0;
        unordered_map<char,int> m;
        int n=s.length();
        while(j<n){
            m[s[j]]++;
            if(m.size()<k){
                j++;
            }
            else if(m.size()==k){
                ans = max(ans,j-i+1);
                j++;
            }
            else if(m.size()>k){
                while(m.size()>k){
                    m[s[i]]--;
                    if(m[s[i]]==0){
                        m.erase(s[i]);
                    }
                    else if(m.size()==k){
                        ans = max(ans,j-i+1);
                    }
                    i++;
                }
                j++;
            }
            else if(ans==-1){
                return -1;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends