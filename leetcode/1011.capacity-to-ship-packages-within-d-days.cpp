/*
 * @lc app=leetcode id=1011 lang=cpp
 *
 * [1011] Capacity To Ship Packages Within D Days
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int shipWithinDays(vector<int> &weights, int days)
    {
        int l = *max_element(weights.begin(), weights.end());
        int h = accumulate(weights.begin(), weights.end(), 0);
        while (l < h)
        {
            int m = l + (h - l) / 2;
            if (canShip(weights, days, m))
                h = m;
            else
                l = m + 1;
        }

        return l;
    }
    bool canShip(vector<int> &weights, int days, int capacity)
    {
        int time = 1; // minimum 1 day for a shipment to complete
        int current = 0;
        for (int weight : weights)
        {
            if (current + weight > capacity)
            {
                time++;
                current = weight;
            }
            else
                current += weight;
        }

        return time <= days;
    }
};
// @lc code=end
