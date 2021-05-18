
package main

import (
  "fmt"
)

func brokenCalc(x int, y int) int {
    ans :=  0 
    
    for y > x {
        if y%2 ==1 {
            y++
        } else {
            y = y/2
        }
        ans++
        
    }
    return ans + x - y
}


func main() {
  fmt.Println(brokenCalc(2,3)) // should be 2
}
