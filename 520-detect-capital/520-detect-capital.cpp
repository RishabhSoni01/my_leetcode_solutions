class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word[0] >= 'A' && word[0] <= 'Z')
            return (alllower(word.substr(1)) || allupper(word.substr(1)));
        else
            return alllower(word.substr(1));
            
    }
    
    bool alllower(string word)
    {
        for(char ch : word)
            if(ch >= 'A' && ch <= 'Z')
                return false;
            
        return true;
    }
        
    bool allupper(string word)
    {
        for(char ch : word)
            if(ch >= 'a' && ch <= 'z')
                return false;
        return true;
    }
};