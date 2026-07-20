/*
 * @lc app=leetcode id=994 lang=cpp
 *
 * [994] Rotting Oranges
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int r = grid.size(), c = grid[0].size(), fc = 0;
        queue<pair<int, int>> q;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (grid[i][j] == 1)
                {
                    fc++;
                }
                else if (grid[i][j] == 2)
                {
                    q.push({i, j});
                }
            }
        }

        if (fc == 0)
            return 0;

        int mins = 0;
        int dir[5] = {0, 1, 0, -1, 0};

        while (!q.empty())
        {
            int size = q.size(), rotten = 0;

            for (int k = 0; k < size; k++)
            {
                auto [x, y] = q.front();
                q.pop();
                for (int i = 0; i < 4; i++)
                {
                    int xr = x + dir[i];
                    int yc = y + dir[i + 1];

                    if (xr >= 0 && xr < r && yc >= 0 && yc < c &&
                        grid[xr][yc] == 1)
                    {
                        fc--;
                        q.push({xr, yc});
                        grid[xr][yc] = 2;
                        rotten = 1;
                    }
                }
            }
            if (rotten)
                mins++;
        }

        return fc == 0 ? mins : -1;
    }
};
// @lc code=end
