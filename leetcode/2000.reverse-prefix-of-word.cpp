/*
 * @lc app=leetcode id=2000 lang=cpp
 *
 * [2000] Reverse Prefix of Word
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] == ch)
            {
                reverse(word.begin(), word.begin() + i + 1);
                break;
            }
        }
        return word;
    }
};
// @lc code=end
