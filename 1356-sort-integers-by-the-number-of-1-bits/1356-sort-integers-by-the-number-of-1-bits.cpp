class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
        return arr;
    }
    static bool compare(int &a,int &b){
        int arr1=a;
        int arr2=b;
        int counta=0;
        int countb=0;
        while(arr1 !=0){
            arr1=arr1&(arr1-1);
            counta++;
        }
        while(arr2!=0){
            arr2 = arr2&(arr2-1);
            countb++;
        }
        if(counta<countb){
            return 1;
        }
        else if(counta>countb){
            return 0;
        }
        return (a<b);
    }
};