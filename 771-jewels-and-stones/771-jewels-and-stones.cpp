class Solution {
public:
    bool list[58];
    int numJewelsInStones(string jewels, string stones) {
        int counts=0;
        for(int i=0;i<jewels.size();i++){
            counts+=count(stones.begin(),stones.end(),jewels[i]);
        }
        return counts;
    }
};