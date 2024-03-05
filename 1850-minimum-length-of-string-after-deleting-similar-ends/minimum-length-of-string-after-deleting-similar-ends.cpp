class Solution {
public:
    int minimumLength(string s) {
        int pl=0,pr=s.length()-1;
        while(pl<pr && s[pl]==s[pr]){
            char ch=s[pl];
           while(pl<=pr && s[pl]==ch){
               pl++;
           }
           while(pr>=pl && s[pr]==ch){
               pr--;
           }
        }
        return pr-pl+1;
    }
};