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
    int ans = 0;
    int d = 0;

    vector<int> dfs(TreeNode* root){
        if(!root) return vector<int>(d+1, 0); // Base Conditon

        auto left = dfs(root->left);
        auto right = dfs(root->right);
        if(!root->left && !root->right) left[0]++; // when root is leaf node

        for(int i=0; i<=d; i++){
            for(int j=0; j<=d && left[i]; j++){
                if( right[j] && i+j <= d ) ans+= left[i] * right[j];
            }
        }


        // combine both child distance frequency count
        // and increase length of each distance 
        for(int i=d; i>=1; i--) left[i] = left[i-1] + right[i-1];
        left[0] = 0; 
        return left;
    }
    int countPairs(TreeNode* root, int distance) {
           d = distance;
        dfs(root);
        return ans;
    }
};