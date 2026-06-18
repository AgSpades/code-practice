/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int currMin = prices[0];
        int maX = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < currMin)
            {
                currMin = prices[i];
            }
            maX = max(maX, prices[i] - currMin);
        }

        return maX;
    }
};
// @lc code=end
