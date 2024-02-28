/*
 * @lc app=leetcode id=881 lang=cpp
 *
 * [881] Boats to Save People
 */

// @lc code=start
class Solution {
public:


    int numRescueBoats(vector<int>& people, int limit) {
        int count = 0;

        vector<int>countarray(limit+1 , 0);

        for(int i = 0 ; i < people.size() ; i++)
        {
            countarray[people[i]]++;
        }

        int index = 0;

        for(int i = 0 ; i<=limit ; i++)
        {
            while(countarray[i]>0)
            {
                people[index] = i;
                index++;
                countarray[i]--;
            }
        }
        
        int i = 0;
        int j = people.size() - 1;
        
        while(i <= j)
        {
            int sum = people[i] + people[j];
            if(sum <= limit)
            {
                count++;
                i++;
                j--;
            }
            else
            {
                count++;
                j--;
            }
        }
        return count;
    }
};
// @lc code=end

