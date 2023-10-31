/*
 * @lc app=leetcode id=1356 lang=cpp
 *
 * [1356] Sort Integers by The Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    static bool compare(int a, int b) {
       
        int bitCountA = __builtin_popcount(a);
        int bitCountB = __builtin_popcount(b);

        if (bitCountA == bitCountB) {
            return a < b;
        }

        return bitCountA < bitCountB;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
       
        sort(arr.begin(), arr.end(), compare);
        
        return arr;
    }
};2433
// @lc code=end

