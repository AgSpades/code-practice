/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {

        int n = height.size();
        if (n == 0)
            return n;
        int l = 0, r = n - 1;
        int v = 0;
        while (l < r)
        {
            v = max(v, (r - l) * min(height[l], height[r]));
            height[l] < height[r] ? l++ : r--;
        }

        return v;
    }
};
// @lc code=end
