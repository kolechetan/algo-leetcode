package main

import (
  "fmt"
)

func maxSatisfied(customers []int, grumpy []int, minutes int) int {
    
    ans := 0
    
    for idx := range customers {
        
        if grumpy[idx] == 0 {
            ans += customers[idx]
        }
    }
    
    
    window_sum := 0
    for i:= 0 ; i < (len(customers) - minutes + 1) ; i++ {
        
        tmpSum := 0
        for  j :=i ;j < i + minutes ; j++ {
            if grumpy[j] == 1 {
                tmpSum +=  customers[j]
            }
        }
        
        if tmpSum > window_sum {
            window_sum = tmpSum
        }
    }
    
    return ans + window_sum
    
}

func main() {
  customers := []int{1,0,1,2,1,1,7,5}
  grumpy := []int{0,1,0,1,0,1,0,1}
  minuts := 3

  fmt.Println(maxSatisfied(customers,grumpy, minuts)) // should be 16 
}
