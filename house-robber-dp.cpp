class Solution {
public:
    int rob(vector<int>& nums) {
     
        vector<int> dp(nums.size());
        
        int n = nums.size();
        
        if(n >= 1)
            dp[0] = nums[0];        
            
        if(n >= 2)
            dp[1] = max(nums[1], nums[0]);             
        if(n >= 3)
            dp[2] = max(nums[2]+nums[0], dp[1]);        
        
        
        for ( int  i=3 ; i< n; ++i) {
            dp[i] = max(nums[i]+ dp[i-2], dp[i-1]);
        }
        
        return dp[n-1];
    }
};
