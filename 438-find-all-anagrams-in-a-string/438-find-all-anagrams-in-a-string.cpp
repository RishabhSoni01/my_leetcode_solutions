class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> phash(26,0);
        vector<int> hash(26,0);
        vector<int> ans;
        int len = s.length();
        int window = p.length();
        int left=0;
        int right = 0;
        if(window>len){
            return ans;
        }
        while(right<window){
            phash[p[right]-'a'] +=1;
            hash[s[right]-'a'] +=1;
            right++;
        }
        right--;
        while(right<len){
            right++;
            if(phash==hash){
                ans.push_back(left);
            }
            if(right!=len){
                hash[s[left]-'a'] -=1;
                hash[s[right]-'a']+=1;
            }
            left++;
        }
        return ans;
    }
};