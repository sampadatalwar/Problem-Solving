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
    int countNodes(TreeNode* root) {
        
        
        if(!root)
            return 0;
        
        
        int lNodes = 0, rNodes=0;
        
        if(root->left)
            lNodes = countNodes(root->left);
        
        if(root->right)
            rNodes = countNodes(root->right);
        
        return 1+lNodes+rNodes;
    }
    

    
};