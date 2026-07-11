/*
 * @lc app=leetcode id=1512 lang=cpp
 *
 * [1512] Number of Good Pairs
 */

#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        unordered_map<int, int> map;
        int ans = 0;
        for (int num : nums)
        {
            ans += map[num]++;
        }
        return ans;
    }
};
// @lc code=end
