/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

#include <bits/stdc++.h>
using namespace std;
// @lc code=start
/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        if (nums.empty())
            return 0;
        unordered_set<int> us(nums.begin(), nums.end());
        int maxl = 0;
        for (int n : us)
        {
            // check if n is start by checking n-1 doesn't exist
            if (!us.count(n - 1))
            {
                int cur = n;
                int st = 1;
                while (us.count(cur + 1))
                {
                    cur++;
                    st++;
                }
                maxl = max(st, maxl);
            }
        }

        return maxl;
    }
};
// @lc code=end

// @lc code=end
