class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]-'a']++;
            m[t[i]-'a']--;
        }
        for(auto x:m){
            if(x.second){
                return false;
            }
        }
        return true;
    }
};






















/*

if(s.length()!=t.length()){
            return false;
        }
        int n = s.length();
        unordered_map<char,int> m;
        for(int i=0;i<n;i++){
            m[s[i]-'a']++;
            m[t[i]-'a']--;
        }
        for(auto x:m){
            if(x.second)
                return false;
        }
         return true;*/