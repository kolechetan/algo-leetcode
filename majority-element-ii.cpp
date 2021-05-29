class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1 = -1e9 -1 ;
        int num2 = -1e9 -1 ;
        int count1 =0, count2=0;
        
        for(int num : nums ) {
            if (num == num1) { 
                count1++;
            } else if (num == num2) { 
                count2++;
            } else if (count1 == 0 ) { 
                num1 = num;
                count1++;
            } else if (count2 == 0 ) { 
                num2 = num;
                count2++;
            } else {
                count1--;
                count2--;
            }
        }
        
        count1 = count2 = 0;
        
        for (int num : nums ) {
            
            if(num == num1) {
                count1++;
            }
            if(num == num2) {
                count2++;
            }
        }
        
        vector<int> result;
        if ( count1 > nums.size()/3) {
            result.push_back(num1);
        }
        if ( count2 > nums.size()/3) {
            result.push_back(num2);
        }
        return result;
    }
};
