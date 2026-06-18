/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> stack, res;
        unordered_map<int, int> map;
        for (int num : nums2)
        {
            while (!stack.empty() && stack.back() < num)
            {
                map[stack.back()] = num;
                stack.pop_back();
            }
            stack.push_back(num);
        }

        // pop out all
        while (!stack.empty())
        {
            map[stack.back()] = -1;
            stack.pop_back();
        }

        for (int &num : nums1)
        {
            res.push_back(map[num]);
        }

        return res;
    }
};
// @lc code=end
