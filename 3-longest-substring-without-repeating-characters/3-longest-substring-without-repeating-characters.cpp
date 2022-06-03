class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int i=0;
        int j=0;
        unordered_map<char,int> m;
        int n=s.length();

        while(j<n){
            m[s[j]]++;
            while(m[s[j]]>1){
                char temp = s[i];
                i++;
                m[temp]--;
            }
            j++;
            ans = max(ans,j-i);
        }
        return ans;
    }
};