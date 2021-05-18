package main

import (
  "fmt"
)


func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {
   
    
    getMax := func (a,b int ) int {
        if a> b {
            return a
        }
        
        return b
     }

    getMin := func (a,b int ) int {
        if a < b {
            return a
        }
        
        return b
     }

    negativeINF := -10000000
    positiveINF := 10000000
    
    if len(nums1) > len(nums2) {
        tmp :=  nums1 
        nums1 = nums2
        nums2 = tmp
    }
    
    
    l := 0
    r := len(nums1) -1 
    
    lx := negativeINF
    ly := negativeINF
    rx := positiveINF
    ry := positiveINF
    
    for true {
        
        xmid := (l + r + 1) /2
        ymid :=  (len(nums1) + len(nums2) ) /2 - xmid
        
        if xmid == len(nums1) {
            rx =  positiveINF
        } else {
            rx =  nums1[xmid]
        }
        
        if ymid == len(nums2) {
            ry =  positiveINF
        } else {
            ry =  nums2[ymid] 
        }
        
        if xmid == 0 {
            lx = negativeINF
        } else {
            lx = nums1[xmid-1]
        }
        if ymid == 0 {
            ly = negativeINF
        } else {
            ly = nums2[ymid -1]
        }
        
      
        if lx <= ry && ly <= rx {
            break
        } else if ly > rx {
            l = xmid +1 
        } else if lx > ry {      
            r= xmid -1
        }
    }
    
    if (len(nums1) + len(nums2)) % 2 == 0 {
        return (float64(getMax(lx, ly)) + float64(getMin(rx, ry)) ) /2
    }
    return float64(getMin(rx, ry))
}

func main() {
  input1 := []int{1,3,8,9,15}
  input2 := []int{16,17,19,21,28}
  
  
  fmt.Println(findMedianSortedArrays(input1, input2)) // should be 15.500000
}
