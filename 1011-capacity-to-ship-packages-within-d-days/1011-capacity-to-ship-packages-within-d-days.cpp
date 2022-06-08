class Solution {
public:
    bool isValid(vector<int> weights,int days,int mid){
        int dayscount = 1;
        int weightcount = 0;
        
        for(int i=0;i<weights.size();i++){
            if(weightcount+weights[i]<=mid){
                weightcount+=weights[i];
            }
            else{
                dayscount++;
                weightcount = 0;
                if(weights[i]> mid || dayscount>days){
                    return false;
                }
                weightcount += weights[i];
            }
        }
        return true;
       
        
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int ans=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum += weights[i];
        }
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(max<weights[i]){
                max = weights[i];
            }
        }
        int end=sum;
        int low=max;
        int mid;
        while(low<=end){
            mid = low + (end-low)/2;
            if(isValid(weights,days,mid)){
                ans=mid;
                end = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};