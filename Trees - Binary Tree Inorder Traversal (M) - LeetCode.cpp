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
    vector<int> op;
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root) return{};
        else
        {   inorderTraversal(root->left);
            op.push_back(root->val);
            inorderTraversal(root->right);
        }
        return op;
    }
};
