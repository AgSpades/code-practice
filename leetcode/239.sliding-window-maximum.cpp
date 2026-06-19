/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        deque<int> window;
        int n = nums.size();
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            while (!window.empty() && nums[window.back()] <= nums[i]) // keep the window decreasing
            {
                window.pop_back();
            }

            window.push_back(i);
            if (window.front() <= i - k)
                window.pop_front(); // old indices to get out

            if (i >= k-1)
                res.push_back(nums[window.front()]);
        }

        return res;
    }
};
// @lc code=end
