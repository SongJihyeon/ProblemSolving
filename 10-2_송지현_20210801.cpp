//LeetCode
//897. Increasing Order Search Tree
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
    TreeNode *head=new TreeNode(0);
    TreeNode *tail=head;
    void inorder(TreeNode* root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            tail->right=root;
            tail=root;
            tail->left=NULL;
            inorder(root->right);  
            
        }
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return head->right;
    }
};