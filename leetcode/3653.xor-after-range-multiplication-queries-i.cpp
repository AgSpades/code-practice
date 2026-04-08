/*
 * @lc app=leetcode id=3653 lang=cpp
 *
 * [3653] XOR After Range Multiplication Queries I
 *
 * https://leetcode.com/problems/xor-after-range-multiplication-queries-i/description/
 *
 * algorithms
 * Medium (73.88%)
 * Likes:    131
 * Dislikes: 61
 * Total Accepted:    78.1K
 * Total Submissions: 106.9K
 * Testcase Example:  '[1,1,1]\n[[0,2,1,4]]'
 *
 * You are given an integer array nums of length n and a 2D integer array
 * queries of size q, where queries[i] = [li, ri, ki, vi].
 *
 * For each query, you must apply the following operations in order:
 *
 *
 * Set idx = li.
 * While idx <= ri:
 *
 * Update: nums[idx] = (nums[idx] * vi) % (10^9 + 7)
 * Set idx += ki.
 *
 *
 *
 *
 * Return the bitwise XOR of all elements in nums after processing all
 * queries.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [1,1,1], queries = [[0,2,1,4]]
 *
 * Output: 4
 *
 * Explanation:
 *
 *
 * A single query [0, 2, 1, 4] multiplies every element from index 0 through
 * index 2 by 4.
 * The array changes from [1, 1, 1] to [4, 4, 4].
 * The XOR of all elements is 4 ^ 4 ^ 4 = 4.
 *
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [2,3,1,5,4], queries = [[1,4,2,3],[0,2,1,2]]
 *
 * Output: 31
 *
 * Explanation:
 *
 *
 * The first query [1, 4, 2, 3] multiplies the elements at indices 1 and 3 by
 * 3, transforming the array to [2, 9, 1, 15, 4].
 * The second query [0, 2, 1, 2] multiplies the elements at indices 0, 1, and 2
 * by 2, resulting in [4, 18, 2, 15, 4].
 * Finally, the XOR of all elements is 4 ^ 18 ^ 2 ^ 15 ^ 4 =
 * 31.​​​​​​​​​​​​​​
 *
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= n == nums.length <= 10^3
 * 1 <= nums[i] <= 10^9
 * 1 <= q == queries.length <= 10^3
 * queries[i] = [li, ri, ki, vi]
 * 0 <= li <= ri < n
 * 1 <= ki <= n
 * 1 <= vi <= 10^5
 *
 *
 */

// @lc code=start

class Solution
{
public:
    int xorAfterQueries(vector<int> &nums, vector<vector<int>> &queries)
    {
        const int MOD = 1e9 + 7;
        for (auto query : queries)
        {
            //[li, ri, ki, vi]
            int l = query[0], r = query[1], k = query[2], v = query[3];
            int idx = l;
            while (idx <= r)
            {
                nums[idx] = (1LL * nums[idx] * v) % MOD;
                idx += k;
            }
        }

        long long ans = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            ans ^= nums[i];
        }

        return ans;
    }
};
// @lc code=end
