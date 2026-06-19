/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> map;
        priority_queue<pair<int, char>> freqs;

        for (char c : s)
        {
            map[c]++;
        }

        for (auto m : map)
        {
            freqs.push({m.second, m.first});
        }

        string res = "";

        while (!freqs.empty())
        {
            auto [count, ch] = freqs.top(); 
            freqs.pop();

            res.append(count, ch); // Appends character 'ch', 'count' times
        }

        return res;
    }
}
;
// @lc code=end
