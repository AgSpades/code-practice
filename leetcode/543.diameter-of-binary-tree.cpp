/*
 * @lc app=leetcode id=543 lang=cpp
 *
 * [543] Diameter of Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int g_Depth = 0;
    int maxDepth(TreeNode *root)
    {
        if (!root)
            return 0;

        int l = maxDepth(root->left),
            r = maxDepth(root->right);

        g_Depth = max(g_Depth, l + r); // update at current node

        return max(l, r) + 1;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        // reset at root
        g_Depth = 0;
        maxDepth(root);
        return g_Depth;
    }
};
// @lc code=end
