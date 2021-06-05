class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int max_so_far = nums[0];
        int min_so_far = nums[0];
        int result = max_so_far;   
        
        for(int i =1;  i <nums.size(); ++i) {
            int cur = nums[i];
            int tmp_max_so_far = max({cur, max_so_far* cur , min_so_far* cur});
            min_so_far = min({cur, max_so_far* cur , min_so_far* cur});
            
            max_so_far =  tmp_max_so_far;
            result = max(result, max_so_far);
        }
        
        return result;
    }
};
