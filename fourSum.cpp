class Solution {
public:
    
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());
        for (int i=0; i< nums.size(); ++i) {
            
            for (int j=i+1; j< nums.size(); ++j) {
                
                int sum2 =  target - nums[i] - nums[j];
                
                int left =  j+1, right  =nums.size()-1; 
                while(left < right) {
                    
                    if (nums[left] + nums[right] == sum2){
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});
                        
                        int leftNum = nums[left];
                        while(left < nums.size() && leftNum == nums[left] ) {left++; }
                        
                        int rightNum = nums[right];
                        while(right > j && rightNum == nums[right] ) {right--; }
                    
                    } else if (nums[left] + nums[right] <  sum2 ) {
                        left++;   
                    } else {
                        right--;
                    }
                }
                int jNum = nums[j];
                while(j+1 < nums.size() && jNum == nums[j+1] ) {j++; }
            }
            int iNum = nums[i];
            while(i+1 < nums.size() && iNum == nums[i+1] ) {i++; }
        }
        
        return result;
    }
};
