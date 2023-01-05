
/*
 * @lc app=leetcode id=944 lang=cpp
 *
 * [944] Delete Columns to Make Sorted
 */

// @lc code=start
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();
        int count = 0;

        for(int i=0;i<m;i++){
                for(int j=0;j<n-1;j++){
                    if(strs[j+1][i] < strs[j][i]){
                    count++;
                    break;
                }
            }
        }
        
        return count;
    }
};
// @lc code=end

