/*
 * @lc app=leetcode id=1046 lang=cpp
 *
 * [1046] Last Stone Weight
 */

// @lc code=start
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        sort(stones.begin(),stones.end());
                
        while(stones.size() > 1)
        {
            int n = stones.size();
            int n1 = stones[n-1];
            stones.pop_back();
            int n2 = stones[n-2];
            stones.pop_back();

            if(n1!=n2)
            {
                int temp = abs(n2-n1);
                stones.push_back(temp);
                sort(stones.begin(),stones.end());
            }
            
        }

        if(stones.size() == 0)
        {
            return 0;
        }
        else
        {
            return stones[0];
        }

    }
};
// @lc code=end

