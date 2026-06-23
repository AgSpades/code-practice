/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int n = nums.size();
        int l = 0, h = n - 1;
        vector<int> res(2, -1);
        // finding first occurence
        while (l <= h)
        {
            int m = l + (h - l) / 2;
            if (nums[m] == target)
            {
                res[0] = m;
                h = m - 1; // move left
            }
            else if (nums[m] > target)
            {
                h = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }

        // finding second occurence
        l = 0, h = n - 1; // reseting them
        while (l <= h)
        {
            int m = l + (h - l) / 2;
            if (nums[m] == target)
            {
                res[1] = m;
                l = m + 1; // move right
            }
            else if (nums[m] > target)
            {
                h = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return res;
    }
};
// @lc code=end
