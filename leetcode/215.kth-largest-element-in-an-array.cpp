/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        priority_queue<int, std::vector<int>, std::greater<int>> minH;
        for (int n : nums)
        {
            minH.push(n);
        }
        for (int i = 0; i < nums.size() - k; i++)
        {
            minH.pop();
        }

        return minH.top();
    }
};
// @lc code=end
