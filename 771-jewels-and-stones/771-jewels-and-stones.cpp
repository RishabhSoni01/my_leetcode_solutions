class Solution {
public:
    bool list[58];
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(int i=0;i<jewels.size();i++){
            list[jewels[i]-65]=true;
        }
        for(int i=0;i<stones.size();i++){
            if(list[stones[i]-65])count++;
        }
        return count;
    }
};