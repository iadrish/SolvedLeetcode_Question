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
    vector<int>preorder;
    void fun(TreeNode* root)
    {
        if(root==NULL)
            return;
        else
        {
        preorder.push_back(root->val);
        fun(root->left);
        fun(root->right);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        fun(root);
        return preorder;
        
    }
};