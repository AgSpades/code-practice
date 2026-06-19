/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution
{
public:
    struct minHeapComparator
    {
        bool operator()(ListNode *a, ListNode *b)
        {
            return a->val > b->val;
        }
    };

    ListNode *
    mergeKLists(vector<ListNode *> &lists)
    {
        // In O(nlogk)
        priority_queue<ListNode *, vector<ListNode *>, minHeapComparator> minH;
        for (auto list : lists)
        {
            if (list)
            {
                minH.push(list);
            }
        }
        ListNode d(0);
        ListNode *t = &d;
        while (!minH.empty())
        {
            ListNode *curr = minH.top(); // smallest element
            minH.pop();
            t->next = curr; // append the small to our res
            t = t->next;    // move the tail
            // extracted node has a next element
            if (curr->next != nullptr)
            {
                minH.push(curr->next);
            }
        }

        return d.next;
    }
};
// @lc code=end
