//122. Best Time to Buy and Sell Stock II
class Solution {
private:
    int solve(int ind,int n,vector<int>& p,vector<vector<int>>& dp,int b){
        if(ind == n) return 0;
        if(dp[ind][b] != -1) return dp[ind][b];

        int profit = 0;
        if(b){
            profit = max(-p[ind]+solve(ind+1,n,p,dp,0),0+solve(ind+1,n,p,dp,1));
        }
        else{
            profit = max(p[ind]+solve(ind+1,n,p,dp,1),0+solve(ind+1,n,p,dp,0));
        }
        return dp[ind][b] = profit;
    }
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solve(0,n,prices,dp,1);
    }
};
