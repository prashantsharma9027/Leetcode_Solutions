#include<bits/stdc++>
/*
 * @lc app=leetcode id=2244 lang=cpp
 *
 * [2244] Minimum Rounds to Complete All Tasks
 */

// @lc code=start
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> mp;

        for(int i = 0; i<tasks.size();i++)
        {
            mp[tasks[i]]++;
        }

        int count = 0;
        for(auto value : mp)
        {
            
            if(value.second==1)
            {
                return -1 ;
            }

            if(value.second%3==0)
            {
                count = count + (value.second)/3;
            }
            else
            {
                count =count + (value.second/3)+1;
            }
        }
        //  for(auto value = mp.begin() ; value != mp.end() ; value++)
        // {
        //     if(value->second==1)
        //     {
        //         return -1 ;
        //     }

        //     if(value->second%3==0)
        //     {
        //         count = count + (value->second)/3;
        //     }
        //     else
        //     {
        //         count =count + (value->second/3)+1;
        //     }

        // }


        return count;

        
    }
};
// @lc code=end

