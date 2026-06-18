/*
 * @lc app=leetcode id=378 lang=cpp
 *
 * [378] Kth Smallest Element in a Sorted Matrix
 */

#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int kthSmallest(vector<vector<int>> &matrix, int k)
    {
        int n = matrix[0].size();
        int l = n * n;
        vector<int> els(l);
        int in = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                els[in++] = matrix[i][j];
            }
        }
        priority_queue<int> maxH;
        for (int i = 0; i < l; i++)
        {
            maxH.push(els[i]);
            if (maxH.size() > k)
            {
                maxH.pop();
            }
        }

        return maxH.top();
    }
};
// @lc code=end
