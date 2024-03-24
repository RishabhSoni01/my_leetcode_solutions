class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int currGCD=0;
            for(int j=i;j<nums.size();j++){
                currGCD=gcd(currGCD,nums[j]);
                if(currGCD==k)count++;
                if(currGCD<k || currGCD%k!=0)break;
            }
        }
        return count;
    }
};