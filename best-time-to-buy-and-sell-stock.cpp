class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        int maxProfite = 0 ;
        int minPrice =  INT_MAX;
        for (auto price :  prices ) {
            minPrice = min(minPrice, price);
            maxProfite = max(maxProfite, price -  minPrice);
        }
        
        return maxProfite;
    }
};
