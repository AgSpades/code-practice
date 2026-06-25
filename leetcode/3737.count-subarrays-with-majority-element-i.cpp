/*
 * @lc app=leetcode id=3737 lang=cpp
 *
 * [3737] Count Subarrays With Majority Element I
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int countMajoritySubarrays(vector<int> &nums, int target)
    {
        int n = nums.size();
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            int tc = 0;
            for (int j = i; j < n; j++)
            {
                if (nums[j] == target)
                    tc++;
                bool valid = 2 * tc > (j - i + 1); // correct length of subarray

                if (valid)
                    res++;
            }
        }

        return res;
    }
};
// @lc code=end
