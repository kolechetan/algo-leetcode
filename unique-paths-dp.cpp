class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> matrix(m, std::vector<int>(n, -1));
        return getUniquePaths(m,n, matrix, 0,0);
    }
    
    int getUniquePaths(const int m, const int n,vector<vector<int>> &matrix, int i, int j) {
        if ( i >= m  || j >=n ){
            return 0;
        } else if (i == m-1 && j == n-1){
            return 1;
        }
        
        if (matrix[i][j] != -1) {
            return matrix[i][j];
        }
        matrix[i][j] = getUniquePaths(m,n, matrix ,i+1,j) + getUniquePaths(m,n, matrix, i,j+1);
        return  matrix[i][j];
        
    }
};
