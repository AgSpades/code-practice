/*
 * @lc app=leetcode id=1710 lang=cpp
 *
 * [1710] Maximum Units on a Truck
 */

// @lc code=start
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(),
             [](auto& a, auto& b) {
                 return a[1] > b[1];
             });
        int ans = 0;
        for (const auto& box : boxTypes) {
            int x = min(box[0], truckSize);
            ans += (x * box[1]);
            truckSize -= x;
            if (!truckSize)
                break;
        }
        return ans;
    }
};
// @lc code=end

