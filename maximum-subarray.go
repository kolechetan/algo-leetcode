package main

import (
  "fmt"
)


func maxSubArray(nums []int) int {
    
    
    getMax := func(a,b int) int {
        if a> b {
            return a
        }
        return b
    }
    
    currentSubArraySum := nums[0]
    maxSubArraySum := nums[0]
    for i := 1 ; i < len(nums) ; i++ {
        currentSubArraySum = getMax(nums[i], currentSubArraySum + nums[i])
        maxSubArraySum = getMax(maxSubArraySum, currentSubArraySum)
    }
    
    return maxSubArraySum
}
func main() {
  input := []int{1,2,2,0,1}
  sortColors(input)
  fmt.Println(input) // should be [0,1,1,2,2]
}
