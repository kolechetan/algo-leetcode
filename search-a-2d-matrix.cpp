class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int R = matrix.size();
        int C = 0 ;
        if ( R> 0  ) {C = matrix[0].size(); }
        int low  =0; 
        int high = R*C - 1;
        int mid  = (low +high )/2 ;
        return binarySearch(matrix, R, C, low, mid, high, target);
    }
    
    bool binarySearch(vector<vector<int>>& matrix, const int R, const int C, int low, int mid, int high, int target) {
        
        if(high >= low) {
            int val =matrix[mid/C][mid%C];
            if ( target == val ) {
                return true;
            } else if ( target < val  ) {
                high = mid -1 ;
                mid =  (high + low)/2;
                return binarySearch(matrix, R, C, low, mid, high, target);
            } else {
                low = mid + 1 ;
                mid =  (high + low)/2;
                return binarySearch(matrix, R, C, low, mid, high, target);    
            }
        }
        return false;
    }
    
};
