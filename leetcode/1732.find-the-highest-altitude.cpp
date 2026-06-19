/*
 * @lc app=leetcode id=1732 lang=cpp
 *
 * [1732] Find the Highest Altitude
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int curr = 0, mX = 0;
        for (int g : gain)
        {
            curr += g;
            mX = max(mX, curr);
        }

        return mX;
    }
};
// @lc code=end
