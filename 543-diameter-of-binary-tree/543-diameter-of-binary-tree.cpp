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
    int max ;
    int diameterOfBinaryTree(TreeNode* root) {
        
        max = 0;
        
        if(!root)
            return max;
        
        dfs(root);
        
        return max;
        
        
    }
    
    int dfs(TreeNode* root){
        
        if(root == nullptr)
            return 0;
        
        int l = dfs(root->left);
        //cout<<"l "<<l<<endl;
        int r = dfs(root->right);
        //cout<<"r "<<r<<endl;
        
        max = max>(l+r) ? max : (l+r);  
        
        int x = l > r ? l+1 : r+1;
        
        
        return x;
        
    }
    
    
};