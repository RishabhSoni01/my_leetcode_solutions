class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int repeating=0 ;
        int n = nums.size();
        vector<int> count(n+1,0);
        for(int i=0;i<n;i++){
                count[nums[i]]++;
        }
        for(int i=0;i<count.size();i++){
            if(count[i]>1){
                repeating = i;
            }
        }
        return repeating;
    }
};