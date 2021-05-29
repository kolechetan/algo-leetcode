class Solution {
public:
    // m+n+2 C n-1 solution 
    int uniquePaths(int m, int n) {
        int N = m + n -2 ;  // min steps to reach from start to dest i.e. (n-1 Right moves and m-1 down moves)
        int r =  n-1;   // you have to place either n-1 or m-1
    
        double res = 1;
        for (int  i = 1 ; i<= r ;++i) {
            
            res  = res* (N-r +i) /i; 
        }
        
        return (int)res;
    }
   
};
