/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &nums) {
        int n=nums.length();
        int l=0,h=n-1,peak=0,mid;
        while(l<h){
            mid = l+(h-l)/2;
            if(nums.get(mid)<nums.get(mid+1)){
                l=peak = mid+1;
            }
            else h=mid;
        }
        l=0;
        h=peak;
        while(l<=h){
            mid = l+(h-l)/2;
            if(nums.get(mid)<target){
                l=mid+1;
            }
            else if(nums.get(mid)>target){
                h=mid-1;
            }
            else {
                return mid;
            }
        }
        l=peak;
        h=n-1;
        while(l<=h){
            mid = l+(h-l)/2;
            if(nums.get(mid)<target){
                h=mid-1;
            }
            else if(nums.get(mid)>target){
                l=mid+1;
            }
            else {
                return mid;
            }
        }
        return -1;
    }
};