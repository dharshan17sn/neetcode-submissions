class Solution {
public:
    // int rec(int i, vector<int> &dp){
    //     if(i==1){
    //         return 1;
    //     }
    //     if(i==0) return 1;
    //     if(dp[i]!=-1) return dp[i];
    //     int back1=rec(i-1,dp);
    //     int back2=rec(i-2,dp);
    // //     return dp[i]=back1+back2;
    // }
    int climbStairs(int n) {
        if(n==0 || n==1) return 1;
        int prev1=1,prev2=1;
        // vector<int> dp(n+1,-1);
        // dp[0]=dp[1]=1;
        for(int i=2;i<=n;i++){
            int curr=prev1+prev2;
            prev2=prev1;
            prev1=curr;
        }

        return prev1;
    }
};
