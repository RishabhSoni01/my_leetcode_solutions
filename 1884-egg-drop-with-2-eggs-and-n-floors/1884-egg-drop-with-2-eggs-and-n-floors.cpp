class Solution {
public:
    int twoEggDrop(int n) {
        return (1+sqrt(8*n-7))/2;
    }
};