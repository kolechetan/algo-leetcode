class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        
        vector<vector<int>> opIntervals;
        if (intervals.size() == 0) {
            opIntervals.push_back(newInterval);    
            return opIntervals ;
        }
        
        for (auto &interval: intervals) {
            
            if (newInterval[1] < interval[0] ) {
                opIntervals.push_back(newInterval);
                newInterval = interval;
            } else  if (interval[1] >= newInterval[0] ) {
                newInterval[0] = std::min(interval[0], newInterval[0]);
                newInterval[1] = std::max(interval[1], newInterval[1]);
            } else {
                opIntervals.push_back(interval);
            }
        }
        if (opIntervals.size() == 0 || opIntervals[opIntervals.size() -1 ][1] < newInterval[0] ) {
             opIntervals.push_back(newInterval);
        }
        return opIntervals;
    }
};
