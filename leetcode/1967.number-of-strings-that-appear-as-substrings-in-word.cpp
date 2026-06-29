/*
 * @lc app=leetcode id=1967 lang=cpp
 *
 * [1967] Number of Strings That Appear as Substrings in Word
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int numOfStrings(vector<string> &patterns, string word)
    {
        int k = 0;
        for (string pattern : patterns)
        {
            if (word.find(pattern) != string::npos)
                k++;
        }
        return k;
    }
};
// @lc code=end
