/*
 * @lc app=leetcode id=649 lang=cpp
 *
 * [649] Dota2 Senate
 */

// @lc code=start
class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> qr;
        queue<int> qd;

        int n = senate.size();

        for(int i = 0 ; i<senate.size();i++)
        {
            if(senate[i]=='R') qr.push(i);
            else qd.push(i);
        }


        while(!qr.empty() && !qd.empty() )
        {
            int a = qr.front();
            qr.pop();
            int b = qd.front();
            qd.pop();

            if(a<b) qr.push(a+n);
            else qd.push(b+n); 
        }

        if(qr.size()>qd.size()) return "Radiant";
        else return "Dire";
    }
};
// @lc code=end

