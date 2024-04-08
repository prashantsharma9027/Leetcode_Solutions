/*
 * @lc app=leetcode id=1700 lang=cpp
 *
 * [1700] Number of Students Unable to Eat Lunch
 */

// @lc code=start
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int circular = 0;
        int square = 0;

        for(int i = 0 ; i< students.size() ; i++)
        {
            if(students[i] == 0)
            {
                circular++;
            }
            else
            {
                square++;
            }
        }


        for(auto i : sandwiches)
        {
            if(i == 0)
            {
                if(circular>0)
                {
                    circular--;
                }
                else
                {
                    break;
                }
            }


            if(i == 1)
            {
                if(square > 0)
                {
                    square--;
                }
                else
                {
                    break;
                }
            }
        }

        return circular + square;


    }
};
// @lc code=end

