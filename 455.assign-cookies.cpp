/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//         sort(g.begin(), g.end()); 
//         sort(s.begin(), s.end());

//         int contentChildren = 0;

//         int i = 0; 
//         int j = 0;

//         while (i < g.size() && j < s.size()) 
//         {
//             if (s[j] >= g[i]) 
//             { 
//                 contentChildren++;
//                 i++;
//             }
//             j++;

//         }

//         return contentChildren;
//     }
// };

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        priority_queue<int>g1,s1;

        for(int i=0;i<g.size();i++)
        {
            g1.push(g[i]);
        }
        for(int i=0;i<s.size();i++)
        {
            s1.push(s[i]);
        }
        
        int count=0;

        while(!g1.empty() && !s1.empty())
        {
            if(g1.top()>s1.top())
                g1.pop();

            else if(g1.top()<=s1.top()){
                count++;
                g1.pop();
                s1.pop();
            }
        }
        return count;

//         sort(g.begin(), g.end()); 
//         sort(s.begin(), s.end());

//         int contentChildren = 0;

//         int i = 0; 
//         int j = 0;

//         while (i < g.size() && j < s.size()) 
//         {
//             if (s[j] >= g[i]) 
//             { 
//                 contentChildren++;
//                 i++;
//             }
//             j++;
//         }

//         return contentChildren;

    }
};
// @lc code=end

