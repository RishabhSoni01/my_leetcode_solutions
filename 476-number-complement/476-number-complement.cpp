using ll = long long;
class Solution {
public:
    int findComplement(int num) {
        
        int bits = floor(log2(num)) + 1;
        ll mask = ll(1<<bits) -1 ;
        return mask ^ num;
        
    }
};