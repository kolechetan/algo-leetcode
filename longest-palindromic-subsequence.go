func longestPalindromeSubseq(s string) int {
        slen := len(s)
    
    if slen == 1 {
        return 1
    }
    var T = make([][]int, slen+1)
    for i := range T {
        T[i] = make([]int, slen+1)
    }
    
    for i :=  0 ; i < slen ; i++ {
        T[i+1][i+1] = 1 
    }
    
    k := 2
    for l :=  0 ; l < slen ; l++ { 
        i := 1
        for j :=  k ; j <= slen; j++ {
           
            if s[i-1] == s[j-1] {
                T[i][j] = 2 +  T[i+1][j-1]
            } else  {
                T[i][j] = func() int {
                    if T[i+1][j] > T[i][j-1]{
                        return T[i+1][j]
                    }
                    return T[i][j-1]
                }()
            }
            i++
        }
        k++
    }
   
    return  T[1][slen]
}
