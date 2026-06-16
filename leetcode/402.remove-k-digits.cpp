/*
 * @lc app=leetcode id=402 lang=cpp
 *
 * [402] Remove K Digits
 */
#include <bits/stdc++.h>

using namespace std;
// @lc code=start
class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        string s;
        for (char c : num)
        {
            while (s.size() && s.back() > c && k > 0)
            {
                s.pop_back();
                k--;
            }
            if (c != '0' || !s.empty())
            {
                s.push_back(c);
            }
        }
        while (k-- && s.size())
        {
            s.pop_back();
        }

        return s.size() == 0 ? "0" : s;
    }
};
// @lc code=end
