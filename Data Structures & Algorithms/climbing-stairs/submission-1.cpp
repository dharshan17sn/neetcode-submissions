class Solution {
public:
    int rec(int i, vector<int> &dp){
        if(i==1){
            return 1;
        }
        if(i<1) return 1;
        if(dp[i]!=-1) return dp[i];
        int back1=rec(i-1,dp);
        int back2=rec(i-2,dp);
        return dp[i]=back1+back2;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return rec(n,dp);
    }
};
