class MovingAverage {
public:
    
    int k;
    deque<int> data;
    int sum ;
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        k = size;
        sum  =0;
    }
    
    double next(int val) {

       
        data.push_back(val);
        if (static_cast<int>(data.size()) <= k ) {
            sum += val;
        } else {
            int front = data.front();
            sum = sum + val  - front;
            data.pop_front();
        }

        return 1.0 * sum / std::min(k, static_cast<int>(data.size()));
    }
    
    
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 
 Input
["MovingAverage", "next", "next", "next", "next"]
[[3], [1], [10], [3], [5]]
Output
[null, 1.0, 5.5, 4.66667, 6.0]
 
 */
