class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<order.length();i++){
            mp[order[i]]=i+1;
        }
        sort(s.begin(),s.end(),
        [&](char ch1,char ch2){
            return mp[ch1]<mp[ch2];
        });
        return s;
    }
};