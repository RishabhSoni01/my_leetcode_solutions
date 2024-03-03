class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long size=0;
        string ans;
        for(int i=0;i<s.length();i++){
            if(!isdigit(s[i])){
                size++;   
            }
            else{
                size=size*(s[i]-'0');
            }
        }
        
        for(int i=s.length()-1;i>=0;i--){
            
            char ch=s[i];
               
            if(isdigit(ch)){
                size= size/(ch-'0');
                k=k%size;
            }
            else{
                if(k==0 || k%size==0){
                    return string(1,ch);
                }
                size--;
            }
        }
        return "";
    }
};