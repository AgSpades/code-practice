/*
 * @lc app=leetcode id=875 lang=cpp
 *
 * [875] Koko Eating Bananas
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    bool check(vector<int> &piles, int h, int mid)
    {
        long long tots = 0;
        for (int pile : piles)
        {
            // ceil(pile/mid)
            tots += (pile + mid - 1) / mid;
        }
        return tots <= h;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int l = 1, r = *max_element(piles.begin(), piles.end());
        while (l < r)
        {
            int m = l + (r - l) / 2; // mid calc and prevent overflow
            if (check(piles, h, m))
            {
                r = m;
            }
            else
            {
                l = m + 1;
            }
        }

        return l;
    }
};
// @lc code=end
