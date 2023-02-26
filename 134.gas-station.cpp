 #include<bits/stdc++>
/*
 * @lc app=leetcode id=134 lang=cpp
 *
 * [134] Gas Station
 */

// @lc code=start
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int remgas = 0;
        int startIndex =0;

        int sum1=0;
        int sum2= 0;
        
        for(int i = 0 ; i<gas.size(); i++)
        {
            sum1 =  sum1 +gas[i];
        }
        for(int i = 0 ; i<cost.size(); i++)
        {
            sum2 = sum2 + cost[i];
        }
        if(sum1-sum2<0)
        {
            return -1;
        }

        for(int i=0;i<gas.size();i++)
        {        
            remgas +=gas[i]-cost[i];
            if(remgas<0){
                startIndex = i+1;
                remgas=0;
            }
        }

        return remgas>=0 ? startIndex:-1;
    }
};
// @lc code=end

