class Solution {
public:
    // int rec(int ind,vector<int> &nums,vector<int> &dp){
    //     if(ind==0) return nums[0];
    //     if(ind<0) return 0;
    //     if(dp[ind]!=-1) return dp[ind];
    //     int take=nums[ind]+rec(ind-2,nums,dp);
    //     int nottake=0+rec(ind-1,nums,dp);
    //     return dp[ind]=max(take,nottake);
    // }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        // return rec(n-1,nums,dp);

        int prev=0;
        int curr=nums[0];
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            int take=nums[i];
            if(i-2>=0) take+=prev;
            int nottake=0+curr;
            int temp=max(take,nottake);
            prev=curr;
            curr=temp;
        }
        return curr;
    }
};
