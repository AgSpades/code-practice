/*
 * @lc app=leetcode id=137 lang=cpp
 *
 * [137] Single Number II
 *
 * https://leetcode.com/problems/single-number-ii/description/
 *
 * algorithms
 * Medium (67.07%)
 * Likes:    8709
 * Dislikes: 752
 * Total Accepted:    892.3K
 * Total Submissions: 1.3M
 * Testcase Example:  '[2,2,3,2]'
 *
 * Given an integer array nums where every element appears three times except
 * for one, which appears exactly once. Find the single element and return it.
 *
 * You must implement a solution with a linear runtime complexity and use only
 * constant extra space.
 *
 *
 * Example 1:
 * Input: nums = [2,2,3,2]
 * Output: 3
 * Example 2:
 * Input: nums = [0,1,0,1,0,1,99]
 * Output: 99
 *
 *
 * Constraints:
 *
 *
 * 1 <= nums.length <= 3 * 10^4
 * -2^31 <= nums[i] <= 2^31 - 1
 * Each element in nums appears exactly three times except for one element
 * which appears once.
 *
 *
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        vector<int> tab(32, 0); // 32 bit integer
        for (int num : nums)
        {
            updateTab(tab, num);
        }

        return bitToDec(tab);
    }

private:
    int bitToDec(vector<int> &tab)
    {
        int n = 0;
        for (int i = 0; i < 32; i++)
        {
            tab[i] %= 3;
            n |= (tab[i] << i); // | prevent Undefined Behaviour
        }

        return n;
    }
    void updateTab(vector<int> &tab, int x)
    {
        for (int i = 0; i < 32; i++)
        {
            int mask = 1 << i;
            if ((x & mask) != 0)
            {
                tab[i]++;
            }
        }
    }
};
// @lc code=end
