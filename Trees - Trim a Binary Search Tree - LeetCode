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
    //TreeNode*stor;
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        //stor = root;
        
        
        if(root == NULL)
        {
            return root;
        }
        
        root->left = trimBST(root->left,L,R);
        root->right = trimBST(root->right,L,R);
        
        
        if(root->val<L)
        {   
            
            return trimBST(root->right,L,R);
        }
        
        if(root->val>R)
        {
           
            return trimBST(root->left,L,R);
        }
        
        return root;
        
        /*
        //TreeNode* sort(TreeNode*r){
        int lef=L;
        int right = R;
        if(root==NULL)
        {return{};}  
        if(root->val>R||root->val<L)
        { stor = root;
            root=NULL;
            if(stor->right!=NULL)
            {//stor = root->left;
            //root=NULL;
            root = stor->right;
             //root->left = stor;
            }
            else
            { //stor = root->right;
            root = stor->left;
            //root->right = stor;}
            //root = root->left;
            }
        }
        if(root!=NULL)
        {
        root->left = trimBST(root->left,L,R);
        root->right = trimBST(root->right,L,R);
        }
        else
        {return{};}
        return root;
        */
    }
};
