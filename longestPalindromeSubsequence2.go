func longestPalindrome(s string) string {
    slen := len(s)
    
    if slen == 1 {
        return s
    }
    var T = make([][]int, slen+1)
    for i := range T {
        T[i] = make([]int, slen+1)
    }
    
    for i :=  0 ; i < slen ; i++ {
        T[i+1][i+1] = 1 
    }
    
    
    
    ops := ""
    max := 0
    k := 2
    for l :=  0 ; l < slen ; l++ { 
        i := 1
        for j :=  k ; j <= slen; j++ {
           
            if s[i-1] == s[j-1] {      
                T[i][j] = T[i+1][j-1] 
                if j-i + 1 > max {
                    max  = j-i
                    if T[i][j] == 1  {
                        ops =  s[i-1:j]
                    }
                }
            } else  {
                T[i][j] = 0
            }
            i++
        }
        k++
    }
    return ops
}
