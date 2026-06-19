/*
 * @lc app=leetcode id=295 lang=cpp
 *
 * [295] Find Median from Data Stream
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class MedianFinder
{
public:
    priority_queue<int> mxH;
    priority_queue<int, vector<int>, greater<int>> mnH;
    MedianFinder()
    {
    }

    void addNum(int num)
    {
        mnH.push(num);
        mxH.push(mnH.top());
        mnH.pop();
        if (mxH.size() - mnH.size() > 1)
        {
            mnH.push(mxH.top());
            mxH.pop();
        }
    }

    double findMedian()
    {
        if (mxH.size() == mnH.size())
        {
            return (mxH.top() + mnH.top()) / 2.0;
        }

        return mxH.top() / 1.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
// @lc code=end
