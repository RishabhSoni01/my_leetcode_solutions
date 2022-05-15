class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_so_far =10000000;
        int max_profit=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            min_so_far = min(prices[i],min_so_far);
            max_profit = max(max_profit,(prices[i]-min_so_far));
        }
        return max_profit;
    }
};
