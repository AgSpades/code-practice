/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        // heap based solution
        unordered_map<int, int> mapCount;
        for (int num : nums)
        {
            mapCount[num]++;
        }

        // top k most frequent
        // store the frequencies of the elements in maxHeap
        // print the number to which the element was mapped
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> tracker;
        // pair should be freq, elem
        for (auto &count : mapCount)
        {
            tracker.push(make_pair(count.second, count.first));
            if (tracker.size() > k)
            {
                tracker.pop();
            }
        }

        vector<int> res;
        for (int i = 0; i < k; i++)
        {
            res.push_back(tracker.top().second);
            tracker.pop(); // move to next element of the pq
        }

        return res;
    }
};
// @lc code=end
