class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> o(numRows);
        
        
        for (int i =0 ; i < numRows; ++i ) {
            o[i].resize(i+1);
            o[i][0] = 1 ; o[i][i] = 1;
            for (int j =1 ; j < i; ++j ) {
                o[i][j] =  o[i-1][j] + o[i-1][j-1];
            }
            
        }
        
        return o;
        
    }
};
