// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string small, string large) {
	    int k=small.size();
	    int n=large.size();
	    vector<int> shash(26,0);
	    vector<int> lhash(26,0);
	    int left=0;
	    int right=0;
	    int count =0;
	    
	    for(auto ch:small){
	        shash[ch-'a']++;
	    }
	    
	    while(right<n){
	        lhash[large[right]-'a']++;
	        if(right-left+1<k){
	            right++;
	        }
	        else if(right-left+1==k){
	            if(lhash==shash){
	                count++;
	            }
	            if(lhash[large[left]-'a']!=0){
	                lhash[large[left]-'a']--;
	            }
	            left++;
	            right++;
	        }
	    }
	    return count;
	    
	}
    /*int areanagrams(string s1,string s2){
        if(s1.length()!=s2.length()){
            return false;
        }
        unordered_map<char,int> m;
        int n=s1.length();
        for(int i=0;i<n;i++){
            m[s1[i]]++;
            m[s2[i]]--;
        }
        for(auto x:m){
            if(x.second){
                return false;
            }
        }
        return true;
    }*/
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends