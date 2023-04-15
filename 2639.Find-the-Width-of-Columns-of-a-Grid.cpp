class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        
       int m = grid.size();
       int n = grid[0].size();
       vector<int> ans(n,0);
    
        
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                int n = grid[j][i];
                int len = 0;
                if(n<=0)
                {
                    while(abs(n)>0)
                    {
                        n = n/10;
                        len++;
                    }
                    len = len + 1;
                }
                else
                {
                    while(n>0)
                    {
                        n = n/10;
                        len++;
                    }
                }
                ans[i] = max(ans[i], len);
            }
        }
        
        return ans;
    }
};