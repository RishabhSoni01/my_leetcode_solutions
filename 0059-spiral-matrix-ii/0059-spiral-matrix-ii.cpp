class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int final=n*n-1;
        vector<vector<int>> ans(n,vector<int> (n,0));
        int left=0,top=0,bottom=n-1,right=n-1;
        int count=0,val=1;
        while(count<=final){
            for(int i=left;i<=right && count<=final;i++){
                ans[top][i]=val;
                val++;
                count++;
            }
            top++;
            for(int i=top;i<=bottom && count<=final;i++){
                ans[i][right]=val;
                val++;
                count++;
            }
            right--;
            for(int i=right;i>=left && count<=final;i--){
                ans[bottom][i]=val;
                val++;
                count++;
            }
            bottom--;
            for(int i=bottom;i>=top && count<=final;i--){
                ans[i][left]=val;
                val++;
                count++;
            }
            left++;
        }
        return ans;
    }
};