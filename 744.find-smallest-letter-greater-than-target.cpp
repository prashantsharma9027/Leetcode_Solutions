/*
 * @lc app=leetcode id=744 lang=cpp
 *
 * [744] Find Smallest Letter Greater Than Target
 */

// @lc code=start
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(int i = 0 ; i< letters.size();i++)
        {
            if(letters[i]>target)
            {
                return letters[i];
            }
        }
        
        return letters[0];  
        


        // int left = 0;
        // int right = letters.size()-1;
        // int mid = 0;
        // if (letters[right] <= target) 
        // {
        //     return letters[0];
        // }

        // while (left <= right) 
        // {
        //     mid = left + (right - left) / 2;
        //     if (letters[mid] > target)
        //     {
        //         right = mid-1;
        //     } 
        //     else 
        //     {
        //         left = mid+1;
        //     }
        // }
        // return letters[left];
    }
};
// @lc code=end

