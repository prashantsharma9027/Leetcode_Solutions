/*
 * @lc app=leetcode id=950 lang=cpp
 *
 * [950] Reveal Cards In Increasing Order
 */

// @lc code=start
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        
        int n = deck.size();
        queue<int> q;

        for(int i = 0 ; i<n ;i++)
        {
            q.push(i);
        }

        vector<int>ans(n);

        sort(deck.begin(),deck.end());


        for(int i = 0 ; i<n ; i++)
        {
            ans[q.front()] = deck[i];
            q.pop();

            if(!q.empty())
            {
                q.push(q.front());
                q.pop();
            }
        }
        return ans;
    }
};
// @lc code=end

