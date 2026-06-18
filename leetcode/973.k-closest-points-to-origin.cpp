/*
 * @lc app=leetcode id=973 lang=cpp
 *
 * [973] K Closest Points to Origin
 */

#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        // max heap based on and keep the k smallest distances
        priority_queue<pair<int, vector<int>>> tr;
        // [dist, point]
        for (auto point : points)
        {
            int dist = (point[0] * point[0]) + (point[1] * point[1]);

            tr.push({dist, point});
            if (tr.size() > k)
            {
                tr.pop();
            }
        }

        vector<vector<int>> res;
        while (!tr.empty())
        {
            res.push_back(tr.top().second);
            tr.pop();
        }

        return res;
    }
};
// @lc code=end
