//121. Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0,mini = prices[0];
        for(int i = 0;i<prices.size();i++){
            profit = max(prices[i]-mini,profit);
            mini = min(prices[i],mini);
        }
        return profit;
    }
};
