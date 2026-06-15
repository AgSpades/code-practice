/*
 * @lc app=leetcode id=1209 lang=cpp
 *
 * [1209] Remove All Adjacent Duplicates in String II
 *
 * https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/description/
 *
 * algorithms
 * Medium (61.40%)
 * Likes:    6117
 * Dislikes: 123
 * Total Accepted:    429.3K
 * Total Submissions: 699.1K
 * Testcase Example:  '"abcd"\n2'
 *
 * You are given a string s and an integer k, a k duplicate removal consists of
 * choosing k adjacent and equal letters from s and removing them, causing the
 * left and the right side of the deleted substring to concatenate together.
 *
 * We repeatedly make k duplicate removals on s until we no longer can.
 *
 * Return the final string after all such duplicate removals have been made. It
 * is guaranteed that the answer is unique.
 *
 *
 * Example 1:
 *
 *
 * Input: s = "abcd", k = 2
 * Output: "abcd"
 * Explanation: There's nothing to delete.
 *
 * Example 2:
 *
 *
 * Input: s = "deeedbbcccbdaa", k = 3
 * Output: "aa"
 * Explanation:
 * First delete "eee" and "ccc", get "ddbbbdaa"
 * Then delete "bbb", get "dddaa"
 * Finally delete "ddd", get "aa"
 *
 * Example 3:
 *
 *
 * Input: s = "pbbcggttciiippooaais", k = 2
 * Output: "ps"
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= s.length <= 10^5
 * 2 <= k <= 10^4
 * s only contains lowercase English letters.
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    string removeDuplicates(string s, int k)
    {
        vector<pair<char, int>> stack;
        for (char c : s)
        {
            if (stack.empty() || stack.back().first != c)
            {
                stack.push_back({c, 0});
            }
            // increment count since one encountered
            if (++stack.back().second == k)
            {
                stack.pop_back();
            }
        }

        string res;
        for (auto el : stack)
        {
            res.append(el.second, el.first);
        }

        return res;
    }
};
// @lc code=end
