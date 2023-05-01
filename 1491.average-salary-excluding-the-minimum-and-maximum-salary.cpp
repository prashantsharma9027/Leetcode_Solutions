/*
 * @lc app=leetcode id=1491 lang=cpp
 *
 * [1491] Average Salary Excluding the Minimum and Maximum Salary
 */

// @lc code=start
class Solution {
public:
    double average(vector<int>& salary) {
        int maxi = 0;
        int mini = INT_MAX;

        int n = salary.size();

        int sum = 0;

        for(int i = 0 ; i<n ; i++)
        {
            sum += salary[i];

            maxi = max(maxi , salary[i]);
            mini = min(mini , salary[i]);
        }

        double res = sum - (maxi + mini);

        return res/(n-2);
    }
};
// @lc code=end

