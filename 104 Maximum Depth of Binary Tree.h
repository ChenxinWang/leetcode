/*
Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Note: A leaf is a node with no children.

Example:

Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
return its depth = 3.
*/
/*递归，边界条件为叶节点，返回子数深度加上当前节点，即结果加一*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(!root){
        return 0;
    }
    int lefth = maxDepth(root -> left);
    int righth = maxDepth(root -> right);
    return lefth > righth ? lefth + 1 : righth + 1;
}
