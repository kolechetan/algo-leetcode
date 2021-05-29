class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count  = 0; 
        int elm ;
        
        for (int num : nums) {
            if (count == 0) {
                elm  = num;
            }
            count += (num == elm) ? 1 : -1 ;
        }
        
        return elm;
    }
};
