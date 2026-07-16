class Solution {
public:
    int rec(int i,vector<int>& cost,vector<int>& dp){
        if(i==0||i==1) return dp[i]=cost[i];
        if(dp[i]!=-1) return dp[i];
        return dp[i]=cost[i]+min(rec(i-1,cost,dp),rec(i-2,cost,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(),-1);
        return min(rec(cost.size()-1,cost,dp),rec(cost.size()-2,cost,dp));
    }
};
