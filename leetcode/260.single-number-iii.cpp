/*
 * @lc app=leetcode id=260 lang=cpp
 *
 * [260] Single Number III
 *
 * https://leetcode.com/problems/single-number-iii/description/
 *
 * algorithms
 * Medium (70.31%)
 * Likes:    6834
 * Dislikes: 277
 * Total Accepted:    602.7K
 * Total Submissions: 857.2K
 * Testcase Example:  '[1,2,1,3,2,5]'
 *
 * Given an integer array nums, in which exactly two elements appear only once
 * and all the other elements appear exactly twice. Find the two elements that
 * appear only once. You can return the answer in any order.
 *
 * You must write an algorithm that runs in linear runtime complexity and uses
 * only constant extra space.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [1,2,1,3,2,5]
 * Output: [3,5]
 * Explanation:  [5, 3] is also a valid answer.
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [-1,0]
 * Output: [-1,0]
 *
 *
 * Example 3:
 *
 *
 * Input: nums = [0,1]
 * Output: [1,0]
 *
 *
 *
 * Constraints:
 *
 *
 * 2 <= nums.length <= 3 * 10^4
 * -2^31 <= nums[i] <= 2^31 - 1
 * Each integer in nums will appear twice, only two integers will appear once.
 *
 *
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        if (nums.size() == 2)
        {
            if (nums[0] != nums[1])
                return {nums[0], nums[1]};
        }
        int re = 0;
        for (int i = 0; i < nums.size(); i++)
            re ^= nums[i];

        int p = 0;
        int temp = re;
        while ((temp & 1) == 0) // find the first set bit
        {
            p++;
            temp = temp >> 1;
        }

        int mask = (1 << p);
        int a = 0, b = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if ((nums[i] & mask) > 0)
                a ^= nums[i];
            else
                b ^= nums[i];
        }

        return {a, b};
    }
};
// @lc code=end
