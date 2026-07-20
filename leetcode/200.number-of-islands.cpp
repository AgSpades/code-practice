/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int numIslands(vector<vector<char>> &grid)
    {
        int res = 0;
        int r = grid.size(), c = grid[0].size();
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (grid[i][j] == '1')
                {
                    res++;
                    fill(grid, i, j);
                }
            }
        }

        return res;
    }

private:
    void fill(vector<vector<char>> &grid, int i, int j)
    {
        int r = grid.size(), c = grid[0].size();
        if (i < 0 || i >= r || j < 0 || j >= c || grid[i][j] == '0')
        {
            return;
        }

        grid[i][j] = '0';
        fill(grid, i + 1, j);
        fill(grid, i - 1, j);
        fill(grid, i, j + 1);
        fill(grid, i, j - 1);
    }
};
// @lc code=end
