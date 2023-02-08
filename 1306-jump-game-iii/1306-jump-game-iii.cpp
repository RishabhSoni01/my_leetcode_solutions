class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        if(arr[start]==-1)return false;
        
        if(arr[start]==0)return true;
        
        int l=start-arr[start];
        int r=start+arr[start];
        
        arr[start]=-1;
        return (r<arr.size() && canReach(arr,r)) || (l>=0 && canReach(arr,l));
    }
};