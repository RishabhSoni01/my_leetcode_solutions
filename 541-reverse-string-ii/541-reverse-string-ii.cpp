class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size(),index=0;
        while(index < n){
            reverse(s.begin()+index,s.begin()+index+k >s.end()?s.end():s.begin()+index+k);
            index += 2*k;
        }
        return s;
    }
};