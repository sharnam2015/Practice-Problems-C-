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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
        }
public:
    TreeNode* helper(vector<int>&num2,int start,int end){
        if(start>end)
        {return NULL;}
        
        int mid = (start+end+1)/2;
        TreeNode* root = new TreeNode(num2[mid]);
        root->left = helper(num2,start,mid-1);
        root->right = helper(num2,mid+1,end);
        
        return root;
    }
};
