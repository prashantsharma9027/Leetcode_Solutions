#include<bits/stdc++>
/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    static bool compare(pair<int, int> p1, pair<int, int> p2) {
        
        if (p1.second == p2.second) return (p1.first > p2.first);
        
        else
            return (p1.second > p2.second);
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> result; 
        unordered_map<int, int> map; 

        for (int i = 0; i < nums.size(); i++) map[nums[i]]++;

        vector<pair<int, int> > frequency(map.begin(), map.end());

        sort(frequency.begin(), frequency.end(), compare);

        for (int i = 0; i < k; i++) result.push_back(frequency[i].first);

        return result;

        // int n=nums.size();
        // unordered_map<int,int>mp;
        // vector<int> Res;
       
        
        // for(int i=0;i<n;i++)
        // {
        //     mp[nums[i]]++;
        // }
        
        // priority_queue<pair<int,int>> m;
        // for( aut o i : mp)
        // {
        //     m.push(make_pair( i.second, i.first));
        // }
        
        // for( int i =0;i<k ; i++)
        // {
        //     Res.push_back( m.top().second);
        //     m.pop();
        // }
      
        // return Res;
    }
};
// @lc code=end
