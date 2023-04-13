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
    vector<int>inorder;
    void fun(TreeNode* root)
    {
        if(root==NULL)
            return;
        else
        {
            fun(root->left);
            inorder.push_back(root->val);
            fun(root->right);
            
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        fun(root);
        return inorder;
    }
};