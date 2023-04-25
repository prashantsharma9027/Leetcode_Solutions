/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<vector<int>>ans;
        

        for(int i = 0 ; i<=rowIndex;i++)
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
        return ans[rowIndex];
    }
};
// @lc code=end

