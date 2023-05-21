/*
 * @lc app=leetcode id=1413 lang=cpp
 *
 * [1413] Minimum Value to Get Positive Step by Step Sum
 */

// @lc code=start
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0,i=1;
        while(1)
        {
            sum=i;
            bool f=true;
            for(auto x:nums)
            {
                sum+=x ;
                if(sum<1)
                {
                  f=false;
                  break;
                }
            }
            if(f)return i;
            i++;
        }


        // for(int i=1;i<nums.size();i++) 
        // {
        //     nums[i]+=nums[i-1]; 
        // }    
        
        
        // sort(nums.begin(),nums.end());

        // int mini = nums[0];

        // return ((mini<0)?abs(mini)+1:1);
    }
};


// @lc code=end

