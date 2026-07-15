class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftprefix(nums.size());
        leftprefix[0]=1;
        //{1,,,,}
        for(int i=1;i<nums.size();i++){
            leftprefix[i]=leftprefix[i-1]*nums[i-1];
        }
        //{1,1,1,2,8}
        //{48,24,6,1}
        // vector<int> rightprefix(nums.size());
        // rightprefix[nums.size()-1]=1;
        // for(int i=nums.size()-2;i>=0;i--){
        //     rightprefix[i]=rightprefix[i+1]*nums[i+1];
        // }
        // for(int i=0;i<nums.size();i++){
        //     nums[i]=rightprefix[i]*leftprefix[i];
        // }
        int rp=1;
        for(int i=nums.size()-1;i>=0;i--){
            leftprefix[i]=rp*leftprefix[i];
            rp=rp*nums[i];
        }
        return leftprefix;
        // return nums;
    }
};
