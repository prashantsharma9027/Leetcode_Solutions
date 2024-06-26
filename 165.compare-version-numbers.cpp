/*
 * @lc app=leetcode id=165 lang=cpp
 *
 * [165] Compare Version Numbers
 */

// @lc code=start
class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0;

        while (i < version1.size() || j < version2.size()) 
        {
            int v1 = 0, v2 = 0;

            while (i < version1.size() && version1[i] != '.') 
            {
                v1 = v1 * 10 + (version1[i] - '0');
                i++;
            }
            while (j < version2.size() && version2[j] != '.') 
            {
                v2 = v2 * 10 + (version2[j] - '0');
                j++;
            }

            if (v1 > v2) return 1;
            else if (v1 < v2) return -1;

            i++; j++;
        }

        return 0;
    }
}; 
// @lc code=end

