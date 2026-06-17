/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        int c = 0;
        long long pSum = 0;
        unordered_map<long long, int> pC;
        pC[0] = 1;
        for (int num : nums)
        {
            pSum += num;
            long long cm = pSum - k;

            if (pC.find(cm) != pC.end())
            {
                c += pC[cm];
            }
            pC[pSum]++;
        }

        return c;
    }
};
// @lc code=end
