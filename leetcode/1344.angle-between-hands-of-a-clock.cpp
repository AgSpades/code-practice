/*
 * @lc app=leetcode id=1344 lang=cpp
 *
 * [1344] Angle Between Hands of a Clock
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    double angleClock(int hour, int minutes)
    {
        double mA = 6.0 * minutes, hA = 30.0 * (hour % 12) + 0.5 * minutes;
        double d = abs(hA - mA);
        return min(d, 360.0 - d);
    }
};
// @lc code=end
