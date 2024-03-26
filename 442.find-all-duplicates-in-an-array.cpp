/*
 * @lc app=leetcode id=442 lang=cpp
 *
 * [442] Find All Duplicates in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //USING STACK
        // stack<int> st;
        // st.push(-1);
        // vector<int> ans;

        // sort(nums.begin(),nums.end());

        // for(int i = 0 ; i<nums.size()-1;i++)
        // {
        //     if(nums[i]!=st.top() || st.top()==-1)
        //     {
        //         if(nums[i]==nums[i+1])
        //         {
        //             st.push(nums[i]);
        //             ans.push_back(nums[i]);
        //         }
        //     }
        // }

        // return ans;
        


        //USING MATHS
        int n = nums.size();

        vector<int> ans;

        for(int i = 0 ; i<n;i++)
        {
            int index = nums[i]%n;
            nums[index]+=n;
        }

        for(int i = 0 ; i<n ; i++)
        {
            if(nums[i]/n >=2)
            {
                ans.push_back(i);
            }
        }

        


        return ans;
    }
};
// @lc code=end

