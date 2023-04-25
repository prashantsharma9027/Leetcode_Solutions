/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int i = 0 ; i<numRows;i++)
        {
            vector<int> temp;

            if(i==0)
            {
                temp.push_back(1);
                ans.push_back(temp);
                continue;
            }

            if(i==1)
            {
                temp.push_back(1);
                temp.push_back(1);
                ans.push_back(temp);
                continue;
            }

            temp.push_back(1);


            int k = 0;

            for(int j = 0 ; j<i-1;j++)
            {
                int a = 0;
                a = ans[i-1][k] + ans[i-1][k+1];
                k++;
                temp.push_back(a);
            }

            temp.push_back(1);

            ans.push_back(temp);

            
        }

        return ans;
    }
};
// @lc code=end

