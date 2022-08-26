class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> output;
        partition(0,s,ans,output);
        return ans;
    }
    private:
    bool isPalindrome(string &s,int left,int right){
        while(left<right){
            if(s[left++]!=s[right--]){
                return false;
            }
        }
        return true;
    }
    void partition(int index,string &s,vector<vector<string>> &ans,vector<string> &output){
        int n= s.length();
        if(index==n){
            ans.push_back(output);
        }
        else{
            for(int i=index;i<n;i++){
                if(isPalindrome(s,index,i)){
                    output.push_back(s.substr(index,i-index+1));
                    partition(i+1,s,ans,output);
                    output.pop_back();
                }
            } 
        }
    }
};