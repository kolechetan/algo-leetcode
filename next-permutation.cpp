class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        
        int a = -1;
        
        for ( int i = nums.size() -2 ; i >=0 ; --i ){
                if ( nums[i+1] > nums[i] ) {
                    a = i;
                    break;
                }
        }
        
        if(a < 0 ) {
            std::reverse(nums.begin(), nums.end());
        } else {
            int b = -1;
            for ( int i = nums.size() -1 ; i >=0 ; --i ){
                 if ( nums[a] < nums[i] ) {
                    b = i;
                    break;
                }
            }
            
            std::swap(nums[a], nums[b]);
            std::reverse(nums.begin() + a + 1,  nums.end());
            
            
        }
    }
};
