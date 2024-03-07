class Solution {
public:
    void reverseString(vector<char>& s) {
        int a=0,b=s.size()-1;
        int c=0;
        while(a<b){
            swap(s[a++],s[b--]);
        }
        return;
    }
};