/*
 * @lc app=leetcode id=3280 lang=cpp
 *
 * [3280] Convert Date to Binary
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    string convertDateToBinary(string date)
    {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        return toBinary(year) + "-" + toBinary(month) + "-" + toBinary(day);
    }

private:
    string toBinary(int num)
    {
        string bstr = bitset<16>(num).to_string();
        return bstr.substr(bstr.find('1'));
    }
};
// @lc code=end
