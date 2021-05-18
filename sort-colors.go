package main

import (
  "fmt"
)

func swap(a, b  *int) {
    t := *a
    *a = *b
    *b = t
}

func sortColors(nums []int)  {
    low := 0
    mid := 0
    high := len(nums) -1
    
    
    for mid <= high {
        if nums[mid] == 0 {
            swap(&nums[low], &nums[mid])
            mid++
            low++
        } else  if nums[mid] == 2 {
            swap(&nums[high], &nums[mid])
            high--
        } else {
            mid++    
        }
    } 
}

func main() {
  input := []int{1,2,2,0,1}
  sortColors(input)
  fmt.Println(input) // should be [0,1,1,2,2]
}
