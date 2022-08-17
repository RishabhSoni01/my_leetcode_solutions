class Solution {
public:
    bool judgeCircle(string moves) {
        int countx=0,county=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U'){
                county+=1;
            }
            else if(moves[i]=='D'){
                county-=1;
            }
            else if(moves[i]=='L'){
                countx+=1;
            }
            else{
                countx-=1;
            }
        }
        if(countx==0 && county==0){
            return true;
        }
        return false;
    }
};