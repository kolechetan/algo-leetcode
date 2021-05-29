class Solution {
public:
    
    
    double fastPow(double x , long long n) {
        if ( n == 0) {return 1;}
        
        double half  = fastPow(x, n/2);
        if (n%2 == 0) { return half * half;}
        return half* half* x;
        
    }
    double myPow(double x, int n) {
        long long N = n;
        double pow =  fastPow(x, N);
        
        if (n < 0 ) {
            return 1/pow;
        }
        
        return pow;
    }
};
