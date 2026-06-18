/*
 * @lc app=leetcode id=503 lang=cpp
 *
 * [503] Next Greater Element II
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> res(n, -1); 
        vector<int> stack;     

       
        for (int i = 0; i < 2 * n; i++)
        {
            int current_val = nums[i % n];

           
            while (!stack.empty() && nums[stack.back()] < current_val)
            {
                res[stack.back()] = current_val; 
                stack.pop_back();
            }

            if (i < n)
            {
                stack.push_back(i); 
            }
        }

        return res;
    }
};
// @lc code=end
