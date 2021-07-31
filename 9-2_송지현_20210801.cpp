//LeetCode
//543. Diameter of Binary Tree
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
    int answer(TreeNode* root, int& res)
    {
        if(root == NULL)
            return 0;
        
        int left = answer(root->left, res);
        int right = answer(root->right, res);

        int temp = max(left, right) + 1;
        int ans = max(temp, 1+left+right);
        res = max(ans, res);

        return temp;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int result = 0;
        answer(root, result);
        return result-1;
    }
};