class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morsecode = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> codes;
        for(auto word:words){
            string code="";
            for(auto ch:word){
                code += morsecode[ch-'a'];
            }
            codes.insert(code);
        }
        return codes.size();
    }
};