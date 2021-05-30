class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int  l=0, r=0;
        int maxSize = 0;
      
        unordered_map<char, int> map;
        while (r < s.length()) {
            auto x =  map.find(s[r]);
            if(x != map.end()) {
                if (map[s[r]] >= l) {
                    l = map[s[r]] + 1;
                }
            }
            
            int tmpMax = r -l +1;
            maxSize = max(maxSize, tmpMax);
            map[s[r]] = r;
            r++;
        }
        return maxSize;
    }
};
