func merge(intervals [][]int) [][]int {
    
    
    getMax := func(i,j int) int { 
                if i > j {
                    return i
                } 
                return j
            }
    
    sort.SliceStable(intervals, func(i,j int) bool { return intervals[i][0] < intervals[j][0] })
    
    mergedIntervals := [][]int{}
    
    for _, interval := range intervals {
        
        l := len(mergedIntervals)  
        if l == 0 || mergedIntervals[l-1][1] < interval[0]  {
            mergedIntervals = append(mergedIntervals, interval)
        } else {
            mergedIntervals[l-1][1] = getMax(mergedIntervals[l-1][1], interval[1] )
        }  
    }
    
    return mergedIntervals
}

func main() {
  fmt.Println(merge([][]int{{1,3},{2,6},{8,10},{15,18}}))
}
