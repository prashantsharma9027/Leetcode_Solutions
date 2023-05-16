/*
 * @lc app=leetcode id=37 lang=cpp
 *
 * [37] Sudoku Solver
 */

// @lc code=start
class Solution {
private:
    bool isSafe(int row, int col, vector<vector<char>>& board, char val) 
    {
        for (int i = 0; i < board[0].size(); i++) {
            if (board[row][i] - '0' == val)
                return false;

            if (board[i][col]  - '0' == val)
                return false;

            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] - '0' == val)
                return false;
        }

        return true;
    }

    bool solve(vector<vector<char>>& board) {
        int n = board[0].size();

        for (int row = 0; row < n; row++) 
        {
            for (int col = 0; col < n; col++) 
            {
                if (board[row][col] == '.') 
                {
                    for (int val = 1; val <= 9; val++) 
                    {
                        if (isSafe(row, col, board, val)) 
                        {
                            board[row][col] = '0' + val;

                            bool possible = solve(board);

                            if (possible) 
                            {
                                return true;
                            } 
                            else 
                            {
                                board[row][col] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }

        return true;
    }

public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
// @lc code=end

