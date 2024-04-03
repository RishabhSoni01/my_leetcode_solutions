class Solution {
public:
    bool dfs(vector<vector<char>>& board,int i,int j,int currindex,string word,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m)return false;

        if(board[i][j]!=word[currindex])return false;
        if(currindex==word.size()-1)return true;

        board[i][j]='0';

        if(dfs(board,i,j-1,currindex+1,word,n,m))return true;
        if(dfs(board,i-1,j,currindex+1,word,n,m))return true;
        if(dfs(board,i,j+1,currindex+1,word,n,m))return true;
        if(dfs(board,i+1,j,currindex+1,word,n,m))return true;

        board[i][j]=word[currindex];
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        char first=word[0];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==first && dfs(board,i,j,0,word,n,m)){
                    return true;
                }
            }
        }
        return false;
    }
};