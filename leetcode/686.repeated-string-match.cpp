/*
 * @lc app=leetcode id=686 lang=cpp
 *
 * [686] Repeated String Match
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int repeatedStringMatch(string a, string b)
    {
        int lb = b.size(), la = a.size();
        string ra = "";
        int max = (lb / la) + 2;
        int count = 0;
        while (count <= max)
        {
            if (ra.find(b) != string::npos)
            {
                return count;
            }
            ra += a;
            count++;
        }

        return -1;
    }
};
// @lc code=end
