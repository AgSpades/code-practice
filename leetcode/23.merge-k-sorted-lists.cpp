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
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        // In O(nlogn)
        vector<ListNode *> nodes;

        // 1. Collect all node pointers from all lists
        for (auto list : lists)
        {
            ListNode *temp = list;
            while (temp != nullptr)
            { 
                nodes.push_back(temp);
                temp = temp->next;
            }
        }

        // If there are no elements, return null
        if (nodes.empty())
            return nullptr;

        // 2. Sort the nodes based on their value
        sort(nodes.begin(), nodes.end(), [](ListNode *a, ListNode *b)
             { return a->val < b->val; });

        // 3. Re-link the sorted nodes together
        for (int i = 0; i < (int)nodes.size() - 1; i++)
        {
            nodes[i]->next = nodes[i + 1];
        }
        nodes.back()->next = nullptr; // Terminate the final node

        // Return the first node in our sorted array
        return nodes[0];
    }
};
// @lc code=end
