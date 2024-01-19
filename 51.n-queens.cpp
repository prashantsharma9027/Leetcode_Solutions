/*
 * @lc app=leetcode id=51 lang=cpp
 *
 * [51] N-Queens
 */

// @lc code=start
class Solution {
private:


    bool isSafe(int row, int col, vector<vector<int>> &board, int n){
        int x = row;
        int y = col;
        
        while(y >= 0)
        {
            if(board[x][y--] == 1)
            {
                return false;
            }
        }
       
        y = col;
        while(x >= 0 && y >= 0)
        {
            if(board[x--][y--] == 1)
            {
                return false;
            }
        }
       
        x = row;
        y = col;

        while(x < n && y >= 0)
        {
            if(board[x++][y--] == 1)
            {
                return false;
            }
        }
        return true;

    }

    void addSolution(vector<vector<string>> &ans, vector<vector<int>> &board, int n)
    {
        vector<string> temp;
        for(int i=0; i<n; i++)
        {
            string s;
            for(int j=0; j<n; j++)
            {
                if(board[i][j] == 1)
                {
                    s.push_back('Q');
                }
                else
                {
                    s.push_back('.');
                }
            }
            temp.push_back(s);
        }
        ans.push_back(temp);
    }

    void solve(int col, vector<vector<string>> &ans, vector<vector<int>> &board, int n)
    {
        if(col == n)
        {
            addSolution(ans, board, n);
            return;
        }

        for(int row =0; row < n; row++)
        {
            if(isSafe(row, col, board, n))
            {
               
                board[row][col] = 1;
                solve(col+1, ans, board, n);
                board[row][col] = 0;
            }
        }

    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>> board(n, vector<int> (n,0));
        vector<vector<string>> ans;
        solve(0, ans, board, n);
        return ans;
    }
};
// @lc code=end

