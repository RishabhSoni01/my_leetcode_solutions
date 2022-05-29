class Solution {
public:
    int maxProduct(vector<string>& words) {
        int maxp=0;
        unordered_map<int,int> m;
        int result = 0;
        for (string word : words) {
            int mask = 0;
            for (char c : word)
                mask |= 1 << (c - 'a');
                m[mask] = max(m[mask], (int) word.size());
            for (auto maskAndLen : m)
                if (!(mask & maskAndLen.first))
                    result = max(result, (int) word.size() * maskAndLen.second);
    }
    return result;
    }
};