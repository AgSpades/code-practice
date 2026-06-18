/*
 * @lc app=leetcode id=1046 lang=cpp
 *
 * [1046] Last Stone Weight
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        // sim using max heap
        priority_queue<int> mxH(stones.begin(), stones.end());

        while (mxH.size() > 1)
        {
            int y = mxH.top();
            mxH.pop();
            int x = mxH.top();
            mxH.pop();
            if (x != y)
            {
                mxH.push(y - x);
            }
        }

        return mxH.empty() ? 0 : mxH.top();
    }
};
// @lc code=end
