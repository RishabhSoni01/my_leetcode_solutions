class Solution {
public:
    int reverse(int num){
        int res=0;
        while(num){
            int temp=num%10;
            num/=10;
            res*=10;
            res+=temp;
        }
        return res;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> s;

        for(int i=0;i<n;i++){
            s.insert(nums[i]);
            s.insert(reverse(nums[i]));
        }
        return s.size();
    }
};