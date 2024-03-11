class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101]={0};
        int maxi=0;
        int f=0;
        for (int x: nums){
            freq[x]++;
            f+=(freq[x]==maxi);
            if (freq[x]> maxi){
                f=1;
                maxi=freq[x];
            }
        }
        return f*maxi;
    }
};