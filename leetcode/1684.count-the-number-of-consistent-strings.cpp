/*
 * @lc app=leetcode id=1684 lang=cpp
 *
 * [1684] Count the Number of Consistent Strings
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int freq[27] = {0};

        for (char c : allowed)
        {
            freq[c - 'a']++;
        }

        int ans = 0;
        for (string word : words)
        {
            bool check = true;
            for (char c : word)
            {
                if (freq[c - 'a'] == 0)
                {
                    check = false;
                    break;
                }
            }
            if (check)
                ans++;
        }

        return ans;
    }
};
// @lc code=end
