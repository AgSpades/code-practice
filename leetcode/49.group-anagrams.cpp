/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> ump;
        for (string s : strs)
        {
            string ordered = s;
            sort(ordered.begin(), ordered.end());

            ump[ordered].emplace_back(s);
        }

        for (auto &u : ump)
        {
            res.push_back(u.second);
        }

        return res;
    }
};
// @lc code=end
