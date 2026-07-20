/*
 * @lc app=leetcode id=733 lang=cpp
 *
 * [733] Flood Fill
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int s = image[sr][sc];
        if (s == color)
            return image;
        dfs(image, sr, sc, s, color);
        return image;
    }

private:
    const int dr[4] = {1, -1, 0, 0};
    const int dc[4] = {0, 0, 1, -1};
    void dfs(vector<vector<int>> &image, int i, int j, int initial, int color)
    {
        int r = image.size(), c = image[0].size();
        if (i < 0 || i >= r || j < 0 || j >= c || image[i][j] != initial)
            return;
        image[i][j] = color;
        for (int k = 0; k < 4; ++k)
        {
            dfs(image, i + dr[k], j + dc[k], initial, color);
        }
    }
};
// @lc code=end
