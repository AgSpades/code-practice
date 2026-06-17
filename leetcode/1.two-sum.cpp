/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            int comp = target - nums[i];
            if (mp.find(comp) != mp.end())
            {
                return {mp[comp], i};
            }
            mp[nums[i]] = i;
        }

        return {};
    }
};
// @lc code=end
