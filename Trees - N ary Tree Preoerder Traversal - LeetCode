/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> st;
        //int i = 0;
        int j=0;
    vector<int> preorder(Node* root) {       
      
        if(root==NULL)
        {
            return{};
        }
        
        st.emplace_back(root->val);
        for(int i=0;i<root->children.size();i++)
        {
            preorder(root->children[i]);
        }
        return st;
        /* if(root==NULL)
        {
            return{};
        }
        st.emplace_back(root->val);
        for(auto j:root->children)
        {
            preorder(j);
        }
            return st;
    */
    }    
        //i=i+1;
        //st[i] = preorder(root->children[j]);
        //i=i+1;
};
