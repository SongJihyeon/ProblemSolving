//LeetCode
//110. Balanced Binary Tree
//C++

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
class Solution {
public:
    int depth(TreeNode* root)
    {
        if(!root) return 0;
        int l = depth(root->left), r = depth(root->right);
        if(l==-1 or r==-1 or abs(l-r)>1) return -1;
        return 1 + max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        return depth(root)!=-1;
    }
};